#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <string>
#include <glad/glad.h>

class Texture {
public:
  Texture(const std::string& fileName);
  void bind(unsigned int unit);
  virtual ~Texture();
private:
  GLuint texture;
};

#endif
