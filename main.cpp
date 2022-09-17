#include<include/game.hpp> 

int main() {
    Game game(800,600,"yes or nah");
    game.run();
    game.terminate();
    return 0;
}