add_library(
    game 
    src/include/game.hpp
    src/game.cpp
)


target_include_directories(game PUBLIC ../external/glfw/include)
target_link_directories(game PUBLIC ../external/glfw/src)

target_include_directories(game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(game PUBLIC glfw)