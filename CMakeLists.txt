cmake_minimum_required(VERSION 3.22)
project(lab7)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab_7 main.cpp
        lab7/Shape.hpp
        lab7/Circle.cpp lab7/Circle.hpp
        lab7/Rectangle.cpp lab7/Rectangle.hpp
        lab7/Triangle.cpp lab7/Triangle.hpp)
