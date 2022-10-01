#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <string>
#include <glad/glad.h>
#include <SDL2/SDL.h>

class Window {
    public:
        Window(int width, int height, const std::string& title);
        ~Window();

        void update();
        void clear();
        bool isRunning() {return running;}

    private:
        SDL_Window* window;
        SDL_GLContext context;
        bool running;
};

#endif