//
// Created by acerda on 15-10-18.
//

#ifndef TAREA1_HALFEDGE_H
#define TAREA1_HALFEDGE_H


#include "Vertex.h"
#include "Face.h"

class HalfEdge {
public:
    HalfEdge(Vertex *originVertex, HalfEdge *previous, HalfEdge *next, HalfEdge *twin, Face *containingFace);
    Vertex* getOrigin();
    HalfEdge* getPrevious();
    HalfEdge* getNext();
    HalfEdge* getTwin();
    Face* getContainingFace();

    private:
        Vertex* originVertex;
        HalfEdge* previous;
        HalfEdge* next;
        HalfEdge* twin;
        Face* containingFace;
};

HalfEdge::HalfEdge(Vertex *originVertex, HalfEdge *previous, HalfEdge *next, HalfEdge *twin, Face *containingFace)
        : originVertex(originVertex), previous(previous), next(next), twin(twin), containingFace(containingFace) {}

Vertex *HalfEdge::getOrigin() {
    return originVertex;
}

HalfEdge *HalfEdge::getPrevious() {
    return previous;
}

HalfEdge *HalfEdge::getNext() {
    return next;
}

HalfEdge *HalfEdge::getTwin() {
    return twin;
}

Face *HalfEdge::getContainingFace() {
    return containingFace;
}

#endif //TAREA1_HALFEDGE_H
