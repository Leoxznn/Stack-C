cmake_minimum_required(VERSION 3.31)
project(Stack C)

set(CMAKE_C_STANDARD 11)

add_executable(Stack functions.c
        header.h
        main.c)
