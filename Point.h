//
// Created by acerda on 25-09-18.
//

#ifndef TAREA1_POINT_H
#define TAREA1_POINT_H

#include <stdlib.h>
#include <string.h>
#include <iostream>

template<class T>
class Point {
    public:
        Point(T, T, T);
        Point operator+(Point &point) const;
        Point operator-(Point &point) const;
        Point operator=(Point &point);
        bool operator==(Point &point) const;

        std::basic_string<char> toString();

        T getXCoordinate() const ;
        T getYCoordinate() const;
        T getZCoordinate() const ;

    private:
        T coordinateX;
        T coordinateY;
        T coordinateZ;



};

template<class T>
Point<T>::Point(T xCoord, T yCoord, T zCoord) {
    coordinateX = xCoord;
    coordinateY = yCoord;
    coordinateZ = zCoord;

}

template<class T>
Point<T> Point<T>::operator+(Point &point) const {
    T x1 = point.getXCoordinate();
    T y1 = point.getYCoordinate();
    T z1 = point.getZCoordinate();

    Point p1(x1+coordinateX, y1+coordinateY, z1+coordinateZ);
    return p1;
}

template<class T>
Point<T> Point<T>::operator-(Point &point) const {
    T x1 = point.getXCoordinate();
    T y1 = point.getYCoordinate();
    T z1 = point.getZCoordinate();

    Point p1(coordinateX-x1, coordinateY-y1 , coordinateZ -z1);
    return p1;
}



template<class T>
bool Point<T>::operator==(Point &point) const {
    T x1 = point.getXCoordinate();
    T y1 = point.getYCoordinate();
    T z1 = point.getZCoordinate();
    T x2 = this->getXCoordinate();
    T y2 = this->getYCoordinate();
    T z2 = this->getZCoordinate();
    return x1 == x2 && y1 == y2 && z1 == z2;
}

template<class T>
T Point<T>::getXCoordinate() const {
    return coordinateX;
}

template<class T>
T Point<T>::getYCoordinate() const {
    return coordinateY;
}

template<class T>
T Point<T>::getZCoordinate() const {
    return coordinateZ;
}

template<class T>
Point<T> Point<T>::operator=(Point &point){
    this = Point(&point.getXCoordinate(),&point.getYCoordinate(),&point.getZCoordinate());
    return *this;
}

template<class T>
std::basic_string<char> Point<T>::toString() {
    std::basic_string<char> pointString;
    pointString = "("+std::to_string(coordinateX)+","+std::to_string(coordinateY)+","+std::to_string(coordinateZ)+")";

    return pointString;
}


#endif //TAREA1_POINT_H
