#include <iostream>
#include <glad/glad.h>
#include "include/display.hpp"

int main() {
    Display display(800, 600, "Hello Opengl");

    while (!display.isClosed()) {
        display.clear(1.f,0.f,1.f,0.5f); 
        display.update();
    }

    return 0;
}