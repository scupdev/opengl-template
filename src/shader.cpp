#include "include/shader.hpp"

Shader::Shader(const std::string &vertexShader,
               const std::string &fragmentShader) {
  create(vertexShader, fragmentShader);
}

Shader::~Shader() { glDeleteProgram(program); }

ShaderProgramSource parseShader(const std::string &filePath) {
  std::ifstream stream(filePath);
  std::string line;
  std::stringstream ss[2];
  ShaderType type = ShaderType::NONE;

  while (getline(stream, line)) {
    if (line.find("#shader") != std::string::npos) {
      if (line.find("vertex") != std::string::npos)
        type = ShaderType::VERTEX;
      else if (line.find("fragment") != std::string::npos)
        type = ShaderType::FRAGMENT;
    } else {
      ss[(int)type] << line << "\n";
    }
  }

  return {ss[0].str(), ss[1].str()};
}

GLuint Shader::compile(const std::string &source, GLenum type) {
  GLuint id = glCreateShader(type);
  const char *src = source.c_str();
  glShaderSource(id, 1, &src, nullptr);
  glCompileShader(id);

  int result;
  glGetShaderiv(id, GL_COMPILE_STATUS, &result);
  if (result == GL_FALSE) {
    int length;
    glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
    char *message = (char *)alloca(length * sizeof(char));
    glGetShaderInfoLog(id, length, &length, message);
    std::cout << "Failed to compile "
              << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") << " shader"
              << std::endl;
    std::cout << message << std::endl;
    glDeleteShader(id);
    return 0;
  }

  return id;
}

GLuint Shader::create(const std::string &vertexShader,
                      const std::string &fragmentShader) {
  program = glCreateProgram();
  GLuint vs = compile(vertexShader, GL_VERTEX_SHADER);
  GLuint fs = compile(fragmentShader, GL_FRAGMENT_SHADER);

  glAttachShader(program, vs);
  glAttachShader(program, fs);
  glLinkProgram(program);
  glValidateProgram(program);

  glDeleteShader(vs);
  glDeleteShader(fs);

  return program;
}
