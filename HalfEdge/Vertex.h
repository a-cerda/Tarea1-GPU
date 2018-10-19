//
// Created by acerda on 15-10-18.
//

#ifndef TAREA1_VERTEX_H
#define TAREA1_VERTEX_H


#include "../Point.h"
#include "HalfEdge.h"

template<class T>
class Vertex {
public:
    Vertex(Point<T> *position, HalfEdge *containingHE) : position(position), containingHE(containingHE) {}
    Point<T>* getPosition();
    HalfEdge* getContainingHE();

public:

    private:
        Point<T>* position;
        HalfEdge* containingHE;

};

template<class T>
HalfEdge *Vertex<T>::getContainingHE() {
    return containingHE;
}

template<class T>
Point<T> *Vertex<T>::getPosition() {
    return position;
}


#endif //TAREA1_VERTEX_H
