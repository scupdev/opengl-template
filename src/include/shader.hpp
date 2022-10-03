#ifndef SHADER_HPP
#define SHADER_HPP

#include <SDL2/SDL.h>
#include <fstream>
#include <glad/glad.h>
#include <iostream>
#include <sstream>
#include <string>

struct ShaderProgramSource {
  std::string VertexSource;
  std::string FragmentSource;
};

enum class ShaderType { NONE = -1, VERTEX = 0, FRAGMENT = 1 };

ShaderProgramSource parseShader(const std::string &filePath);

class Shader {
public:
  Shader(const std::string &vertexShader, const std::string &fragmentShader);
  virtual ~Shader();
  GLuint compile(const std::string &source, GLenum type);
  GLuint create(const std::string &vertexShader,
                const std::string &fragmentShader);
  void bind();

private:
  GLuint program;
};

#endif
