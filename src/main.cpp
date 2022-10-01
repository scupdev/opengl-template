#include <iostream>
#include <glad/glad.h>
#include "include/window.hpp"

int main() {
    Window window(1024, 600, "Hello Opengl");

    while (window.isRunning()) {
        window.clear(0.1f, 1.f, 0.3f, 1.f);
        window.update();
    }    
    
    return 0;
}