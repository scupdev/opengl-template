#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <iostream>
#include <string>
#include <glad/glad.h>
#include <SDL2/SDL.h>

class Display {
    public:
        Display(int width, int height, const std::string& title);
        virtual ~Display();
        void update();
        void clear(float r, float g, float b, float a);
        bool isClosed();

    private:
        Display(const Display& other) {}
        Display& operator=(const Display& other) {return *this;}

    private:
        SDL_Window* window;
        SDL_GLContext glContext;
        bool running;
};

#endif