#shader vertex
#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec2 texture;

out vec2 texCoord;

void main() {
    gl_Position = position;
    texCoord = texture;
}

#shader fragment
#version 330 core

in vec2 texCoord;
uniform sampler2D diffuse;

void main() {
  gl_FragColor= texture(diffuse, texCoord);
}
