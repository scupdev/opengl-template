add_executable(
    ${PROJECT_NAME}
    glad.c 
    main.cpp 
    display.cpp 
    include/display.hpp
)

target_link_libraries(${PROJECT_NAME} GL dl glfw SDL2)