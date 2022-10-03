#ifndef MESH_HPP
#define MESH_HPP

#include <glad/glad.h>
#include <glm/glm.hpp>

class Vertex {
public:
  Vertex(const glm::vec3 &pos) { this->pos = pos; }

private:
  glm::vec3 pos;
};

class Mesh {
public:
  Mesh(Vertex *vertices, unsigned int numVertices);
  virtual ~Mesh();
  void draw();

private:
  enum { POSITION_VB, NUM_BUFFERS };

  GLuint VAO;
  GLuint vertexArrayBuffers[NUM_BUFFERS];
  unsigned int drawCount;
};

#endif
