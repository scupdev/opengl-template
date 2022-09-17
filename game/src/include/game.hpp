#ifndef GAME_HPP
#define GAME_HPP

#include<GLFW/glfw3.h>
#include<iostream>

class Game {
public:
    Game(int width, int height, const char* title);
    void run();
    void terminate();
private:
    GLFWwindow* window;
};

#endif // !GAME_HPP