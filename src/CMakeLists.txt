add_executable(
    ${PROJECT_NAME}
    glad.c 
    main.cpp 
)

target_link_libraries(${PROJECT_NAME} GL dl glfw SDL2)