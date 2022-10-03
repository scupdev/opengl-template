#include "include/mesh.hpp"

Mesh::Mesh(Vertex *vertices, unsigned int numVertices) {
  drawCount = numVertices;
  glGenVertexArrays(1, &VAO);
  glBindVertexArray(VAO);

  glGenBuffers(NUM_BUFFERS, vertexArrayBuffers);
  glBindBuffer(GL_ARRAY_BUFFER, vertexArrayBuffers[POSITION_VB]);
  glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(vertices[0]), vertices, GL_STATIC_DRAW);

  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

  glBindVertexArray(0);
}

Mesh::~Mesh() { glDeleteVertexArrays(1, &VAO); }

void Mesh::draw() {
  glBindVertexArray(VAO);
  glDrawArrays(GL_TRIANGLES, 0, drawCount);
  glBindVertexArray(0);
}
