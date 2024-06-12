cmake_minimum_required(VERSION 3.26)
project(lox C)

set(CMAKE_C_STANDARD 17)

add_executable(lox main.c
        common.h
        chunk.h
        chunk.c
        memory.h
        memory.c
        debug.c
        debug.h
        value.c
        value.h
        vm.c
        vm.h
        compiler.c
        compiler.h
        scanner.c
        scanner.h)
