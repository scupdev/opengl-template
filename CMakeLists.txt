cmake_minimum_required(VERSION 3.24.1)
project(openglTemplate)

add_subdirectory(game)
add_subdirectory(external/glfw)

target_include_directories(glfw PUBLIC external/glfw/include)
target_link_directories(glfw PUBLIC external/glfw/src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE game PUBLIC glfw PUBLIC opengl32)

