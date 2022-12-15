cmake_minimum_required(VERSION 3.23)
project(question C)

set(CMAKE_C_STANDARD 99)

add_executable(question main.c)

add_executable(time time.c)
add_executable(main main.c)
add_executable(score score.c)