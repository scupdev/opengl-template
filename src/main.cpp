#include "include/shader.hpp"
#include "include/window.hpp"
#include <filesystem>
#include <glad/glad.h>
#include <iostream>
#include <string>

int main() {
  Window window(1024, 600, "Hello Opengl");

  ShaderProgramSource source = parseShader("../../src/shaders/basic.shader");
  Shader shader(source.VertexSource, source.FragmentSource);

  while (window.isRunning()) {
    window.clear(0.1f, 1.f, 0.3f, 1.f);
    window.update();
  }

  return 0;
}
