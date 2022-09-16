add_library(
    game 
    src/include/add.h
    src/add.cpp
)

target_include_directories(game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
