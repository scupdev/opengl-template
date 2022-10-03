#ifndef MESH_HPP
#define MESH_HPP

#include <glad/glad.h>
#include <glm/glm.hpp>

class Vertex {
public:
  Vertex(const glm::vec3 &pos, const glm::vec2 &texCoords) {
    this->pos = pos;
    this->texCoords = texCoords;
  }
  inline glm::vec3* getPos() {return &pos;}
  inline glm::vec2* getTexCoords() {return &texCoords;}

private:
  glm::vec3 pos;
  glm::vec2 texCoords;
};

class Mesh {
public:
  Mesh(Vertex *vertices, unsigned int numVertices);
  virtual ~Mesh();
  void draw();

private:
  enum { POSITION_VB, TEX_COORD_VB, NUM_BUFFERS };

  GLuint VAO;
  GLuint vertexArrayBuffers[NUM_BUFFERS];
  unsigned int drawCount;
};

#endif
