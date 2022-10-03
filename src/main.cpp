#include "include/shader.hpp"
#include "include/window.hpp"
#include "include/mesh.hpp"
#include <glad/glad.h>
#include <iostream>
#include <string>

int main() {
  Window window(1024, 600, "Hello Opengl");

  Vertex vertices[] = {
    Vertex(glm::vec3(-0.5f,-0.5,0)),
    Vertex(glm::vec3(0,0.5f,0)),
    Vertex(glm::vec3(0.5f,-0.5f,0))
  };

  Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

  ShaderProgramSource source = parseShader("../../src/shaders/basic.shader");
  Shader shader(source.VertexSource, source.FragmentSource); 

  while (window.isRunning()) {
    window.clear(0.1f, 1.f, 0.3f, 1.f);
    shader.bind();
    mesh.draw();
    window.update();
  };

  return 0;
}
