#define STB_IMAGE_IMPLEMENTATION

#include "include/texture.hpp"
#include "include/stb_image.h"
#include <cassert>
#include <iostream>

Texture::Texture(const std::string& fileName) {
  int width, height, numComponents;
  stbi_set_flip_vertically_on_load(true);
  unsigned char* img_data = stbi_load(fileName.c_str(), &width, &height, &numComponents, 4);

  if (img_data == NULL) {
    std::cerr << "texture loading failed" << fileName << std::endl;
  }

  glGenTextures(1, &texture);
  glBindTexture(GL_TEXTURE_2D, texture);

  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, img_data);

  stbi_image_free(img_data);
}

Texture::~Texture() {
  glDeleteTextures(1, &texture);
}

void Texture::bind(unsigned int unit) {
  assert(unit >= 0 && unit <= 31);
  glActiveTexture(GL_TEXTURE0 + unit);
  glBindTexture(GL_TEXTURE_2D, texture);
}
