add_executable(
    ${PROJECT_NAME}
    glad.c 
    main.cpp
    window.cpp
    shader.cpp
    include/window.hpp
    include/shader.hpp
)

target_link_libraries(${PROJECT_NAME} GL dl glfw SDL2)
