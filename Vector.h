//
// Created by acerda on 26-09-18.
//

#ifndef TAREA1_VECTOR_H
#define TAREA1_VECTOR_H

#include "Point.h"
#include <math.h>

template <class T>
class Vector {
public:
    Vector(Point<T>* point);
    Vector(Point<T>* startPoint, Point<T>* endPoint);
    Vector operator+(Vector &vector) const;
    Vector operator-(Vector &vector) const;
    bool operator==(Vector &vector) const;
    Vector operator=(Vector &vector) const ;
    std::basic_string<char> toString();

    T modulus();

    void putInOrigin();
    Vector crossProduct(Vector vector);
    Vector dotProduct(Vector vector);

    Point<T>* getStartPoint();
    Point<T>* getEndPoint();

private:
    Point<T>* startPoint;
    Point<T>* endPoint;

};

template<class T>
Vector<T>::Vector(Point<T>* point) {
    this->startPoint = new Point<T>(0,0,0);
    this->endPoint = point;


}

template<class T>
Vector<T>::Vector(Point<T>* startPoint, Point<T>* endPoint) {
    this->startPoint = startPoint;
    this->endPoint = endPoint;
    this->putInOrigin();

}

template<class T>
Vector<T> Vector<T>::operator+(Vector &vector) const {
    Point<T>* startPoint2 = vector.getStartPoint();
    Point<T>* endPoint2 = vector.getEndPoint();
    Point<T> sumStart = *(this->startPoint)+(*startPoint2);
    Point<T> sumEnd = *(this->endPoint)+(*endPoint2);

    Vector vector1(&sumStart , &sumEnd);//No se si esta bueno, revisar

    return vector1;
}

template<class T>
Vector<T> Vector<T>::operator-(Vector &vector) const {
    Point<T>* startPoint2 = vector.getStartPoint();
    Point<T>* endPoint2 = vector.getEndPoint();
    Point<T> subStart = *(this->startPoint)-*startPoint2;
    Point<T> subEnd = *(this->endPoint)-*endPoint2;

    Vector vector1(&subStart ,&subEnd );
    return vector1;
}

template<class T>
Vector<T> Vector<T>::operator=(Vector &vector) const {
    return *vector;
}

template<class T>
bool Vector<T>::operator==(Vector &vector) const {
    Point<T>* startPoint2 = vector.getStartPoint();
    Point<T>* endPoint2 = vector.getEndPoint();


    return *(this->startPoint) == *startPoint2 && *(this->endPoint) == *endPoint2;
}

template<class T>
T Vector<T>::modulus() {
    T x1 = (this->startPoint)->getXCoordinate();
    T y1 = (this->startPoint)->getYCoordinate();
    T z1 = (this->startPoint)->getZCoordinate();
    T x2 = (this->endPoint)->getXCoordinate();
    T y2 = (this->endPoint)->getYCoordinate();
    T z2 = (this->endPoint)->getZCoordinate();


    return sqrt(x1*x1+y1*y1+z1*z1+x2*x2+y2*y2+z2*z2);
}

template<class T>
Vector<T> Vector<T>::crossProduct(Vector vector) {
    T x = this->endPoint->getYCoordinate() * vector.getEndPoint()->getZCoordinate() - this->endPoint->getZCoordinate() * vector.getEndPoint()->getYCoordinate();
    T y = this->endPoint->getZCoordinate() * vector.getEndPoint()->getXCoordinate() - this->endPoint->getXCoordinate() * vector.getEndPoint()->getZCoordinate();
    T z = this->endPoint->getXCoordinate() * vector.getEndPoint()->getYCoordinate() - this->endPoint->getYCoordinate() * vector.getEndPoint()->getXCoordinate();
    return Vector(new Point<T>(x,y,z));
}

template<class T>
Vector<T> Vector<T>::dotProduct(Vector vector) {
    T x = (this->endPoint)->getXCoordinate() * (vector.getEndPoint())->getXCoordinate();
    T y = (this->endPoint)->getYCoordinate() * (vector.getEndPoint())->getYCoordinate();
    T z = (this->endPoint)->getZCoordinate() * (vector.getEndPoint())->getZCoordinate();

    return Vector(new Point<T>(x,y,z));
}

template<class T>
void Vector<T>::putInOrigin() {
    T x = this->endPoint->getXCoordinate() - this->startPoint->getXCoordinate();
    T y = this->endPoint->getYCoordinate() - this->startPoint->getYCoordinate();
    T z = this->endPoint->getZCoordinate() - this->startPoint->getZCoordinate();

    this->startPoint = new Point<T>(0,0,0);
    this->endPoint = new Point<T>(x,y,z);
}

template<class T>
std::basic_string<char> Vector<T>::toString() {
    T x = (this->endPoint)->getXCoordinate();
    T y = (this->endPoint)->getYCoordinate();
    T z = (this->endPoint)->getZCoordinate();
    std::basic_string<char> stringVector;
    stringVector = "("+std::to_string(x)+","+std::to_string(y)+","+std::to_string(z)+")";
    return stringVector;
}

template<class T>
Point<T> *Vector<T>::getStartPoint() {
    return this->startPoint;
}

template<class T>
Point<T> *Vector<T>::getEndPoint() {
    return this->endPoint;
}


#endif //TAREA1_VECTOR_H
