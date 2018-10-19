//
// Created by acerda on 15-10-18.
//

#ifndef TAREA1_FACE_H
#define TAREA1_FACE_H


#include "HalfEdge.h"

class Face {
public:
    explicit Face(HalfEdge *pHalfEdgeInThisFace) : pHalfEdgeInThisFace(pHalfEdgeInThisFace) {}
    HalfEdge* getHalfEdge(); //Returns a pointer to the halfedge in this face

public:

    private:
        HalfEdge* pHalfEdgeInThisFace;
};

HalfEdge *Face::getHalfEdge() {
    return pHalfEdgeInThisFace;
}


#endif //TAREA1_FACE_H
