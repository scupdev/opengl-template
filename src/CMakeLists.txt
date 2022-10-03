add_executable(
    ${PROJECT_NAME}
    glad.c 
    main.cpp
    window.cpp
    shader.cpp
    mesh.cpp
    texture.cpp
    include/window.hpp
    include/shader.hpp
    include/mesh.hpp
    include/texture.hpp
    include/stb_image.h
)

target_link_libraries(${PROJECT_NAME} GL dl glfw SDL2)
