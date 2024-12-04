cmake_minimum_required(VERSION 3.29)
project(EjerciciosSTL)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio1
    Ej1/main.cpp)

add_executable(Ejercicio2
    Ej2/main.cpp
    Ej2/triangulo.cpp
    Ej2/circulo.cpp)

add_executable(Ejercicio3
        Ej3/main.cpp
        Ej3/circulo.cpp
)