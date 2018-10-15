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

    private:
        Point<T>* position;
        HalfEdge* containingHE;

};


#endif //TAREA1_VERTEX_H
