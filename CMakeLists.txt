cmake_minimum_required(VERSION 3.12)
project(Tarea1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tarea1 main.cpp Point.cpp Point.h Vector.cpp Vector.h HalfEdge/HalfEdge.cpp HalfEdge/HalfEdge.h HalfEdge/Vertex.cpp HalfEdge/Vertex.h HalfEdge/Face.cpp HalfEdge/Face.h)