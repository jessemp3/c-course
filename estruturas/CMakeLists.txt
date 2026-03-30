cmake_minimum_required(VERSION 4.1)
project(estruturas C)

set(CMAKE_C_STANDARD 11)

add_library(estruturas STATIC library.c
        soma.cpp
        operacoes_math/Math.c
        calculadora/Calculadora.c)
