#include <iostream>
#include <glad/glad.h>
#include "include/window.hpp"

int main() {
    Window window(1024, 600, "Hello Opengl");

    while (window.isRunning()) {
        window.clear();
        window.update();
    }    
    
    return 0;
}