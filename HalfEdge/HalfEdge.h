//
// Created by acerda on 15-10-18.
//

#ifndef TAREA1_HALFEDGE_H
#define TAREA1_HALFEDGE_H


#include "Vertex.h"

class HalfEdge {
    public:

    private:
        Vertex* originVertex;
        HalfEdge* previous;
        HalfEdge* next;
        HalfEdge* twin;
        Face* containingFace;
};


#endif //TAREA1_HALFEDGE_H
