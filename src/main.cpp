#include <glad/glad.h>
#include <iostream>
#include <string>

#include "include/shader.hpp"
#include "include/window.hpp"
#include "include/mesh.hpp"
#include "include/texture.hpp"

int main() {
  Window window(1024, 600, "Hello Opengl");

  Vertex vertices[] = {
    Vertex(glm::vec3(-0.5f,-0.5f,0), glm::vec2(0,0)),
    Vertex(glm::vec3(0,0.5f,0), glm::vec2(0.5,1.0)),
    Vertex(glm::vec3(0.5f,-0.5f,0), glm::vec2(1,0)),
  };

  Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

  ShaderProgramSource source = parseShader("shaders/basic.shader");
  Shader shader(source.VertexSource, source.FragmentSource);
  Texture texture("res/pepe.jpg");

  while (window.isRunning()) {
    window.clear(0.1f, 1.f, 0.3f, 1.f);
    shader.bind();
    texture.bind(0);
    mesh.draw();
    window.update();
  };

  return 0;
}
