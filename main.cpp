#include <iostream>
#include "Point.h"
#include "Vector.h"
#include <sstream>
#include <string>

void simpleTest(){
    Point p1 = Point(1.2,1.2,1.2);
    Point p2 = Point(3.2,2.4,3.6);
    Point p3 = p1+p2;
    Point p4 = p2-p1;

    std::cout << p1.toString() << " == " << p2.toString() << " es : " << (p1 == p2 ? "verdadero" : "falso") << std::endl;

    std::cout << p1.toString() << " + " << p2.toString() << " es : " << p3.toString() << std::endl;

    Vector v1 = Vector(&p1,&p2);
    Vector v2 = Vector(new Point<int>(1,0,0));
    Vector v3 = Vector(new Point<int>(0,1,0));
    Vector v4 = Vector(new Point<double>(0.0,0.0,1.0));
    Vector v5 = Vector(new Point<double>(3.1,2.2,-2.0));
    Vector v6 = v2+v3;
    Vector v7 = v2.crossProduct(v3);

    std::cout << "El producto punto entre v2 = (1,0,0) y v3 = (0,1,0) es : " << v2.dotProduct(v3).toString() << std::endl;
    std::cout << "El producto cruz entre v3 = (0,1,0) y v2 = (1,0,0) es : " << v3.crossProduct(v2).toString() << std::endl;
    std::cout << "El producto cruz entre v2 = (1,0,0) y v3 = (0,1,0) es : " << v2.crossProduct(v3).toString() << std::endl;
    std::cout << "La suma entre v1 = "<<v1.toString() << "y v4 = " << v4.toString() << "es : " << (v1+v4).toString() << std::endl;
    std::cout << "La resta entre v1 = "<<v1.toString() << "y v5 = " << v5.toString() << "es : " << (v1-v5).toString() << std::endl;
    std::cout << "El módulo de v1 = "<< v1.toString() << " es : " << v1.modulus() << std::endl;
    std::cout << "La suma entre v6 = " << v6.toString() << "y v7 =" << v7.toString() << " es : " << (v6+v7).toString() << std::endl;

}

void pointTest(){
    std::cout << "Ingrese el primer punto coordenada por coordenada, si usa decimales, separelos con un punto (.)" << std::endl;
    std::cout << "Ingrese la coordenada x: " << std::endl;
    double x1;
    std::cin >> x1;
    std::cout << "Ingrese la coordenada y: " << std::endl;
    double y1;
    std::cin >> y1;
    std::cout << "Ingrese la coordenada z: " << std::endl;
    double z1;
    std::cin >> z1;
    std::cout << "Ingrese el segundo punto coordenada por coordenada, si usa decimales, separelos con un punto (.)" << std::endl;
    std::cout << "Ingrese la coordenada x: " << std::endl;
    double x2;
    std::cin >> x2;
    std::cout << "Ingrese la coordenada y: " << std::endl;
    double y2;
    std::cin >> y2;
    std::cout << "Ingrese la coordenada z: " << std::endl;
    double z2;
    std::cin >> z2;
    Point<double> p1 = Point<double>(x1,y1,z1);
    Point<double> p2 = Point<double>(x2,y2,z2);
    std::cout << "Ingrese la operacion que desea realizar entre los dos puntos:" << std::endl;

    std::cout << "pulse '+' para suma, '-' para resta '=' para igualdad logica, seguido de ENTER ('e' para salir)" << std::endl;

    char operation = 'a';
    while (operation != 'e'){
        std::cin >> operation;
        switch (operation){
            case '+':
                std::cout << "La suma entre p1 = "<< p1.toString() << " y p2 = "<< p2.toString() << " es: " <<(p1+p2).toString() << std::endl;
                break;
            case '-':
                std::cout << "La resta entre p1 = "<< p1.toString() << " y p2 = "<< p2.toString() << " es: " <<(p1-p2).toString() << std::endl;
                break;
            case '=':
                std::cout << "La igualdad  entre p1 = "<< p1.toString() << " y p2 = "<< p2.toString() << " es: " <<((p1==p2) ? "verdadero" : "falso") << std::endl;
                break;
            case 'e':
                break;
            default:
                std::cout << "No se puso una expresión válida, intente nuevamente" << std::endl;
                break;
        }
    }





}

void vectorTest(){
    std::cout << "Ingrese el primer Vector coordenada por coordenada (origen en 0,0,0), si usa decimales, separelos con un punto (.)" << std::endl;
    std::cout << "Ingrese la coordenada x: " << std::endl;
    double x1;
    std::cin >> x1;
    std::cout << "Ingrese la coordenada y: " << std::endl;
    double y1;
    std::cin >> y1;
    std::cout << "Ingrese la coordenada z: " << std::endl;
    double z1;
    std::cin >> z1;
    std::cout << "Ingrese el segundo vector coordenada por coordenada, si usa decimales, separelos con un punto (.)" << std::endl;
    std::cout << "Ingrese la coordenada x: " << std::endl;
    double x2;
    std::cin >> x2;
    std::cout << "Ingrese la coordenada y: " << std::endl;
    double y2;
    std::cin >> y2;
    std::cout << "Ingrese la coordenada z: " << std::endl;
    double z2;
    std::cin >> z2;
    Vector<double> v1 = Vector<double>(new Point<double>(x1,y1,z1));
    Vector<double> v2 = Vector<double>(new Point<double>(x2,y2,z2));
    std::cout << "Ingrese la operacion que desea realizar entre los dos vectores:" << std::endl;

    std::cout << "pulse '+' para suma, '-' para resta '=' para igualdad logica" << std::endl;
    std::cout <<  " '.' para producto punto, 'x' para producto cruz , 'm' para módulo, seguido de ENTER ('e' para salir)" << std::endl;

    char operation = 'a';
    while (operation != 'e'){
        std::cin >> operation;
        switch (operation){
            case '+':
                std::cout << "La suma entre v1 = "<< v1.toString() << " y v2 = "<< v1.toString() << " es: " <<(v1+v2).toString() << std::endl;
                break;
            case '-':
                std::cout << "La resta entre v1 = "<< v1.toString() << " y v2 = "<< v2.toString() << " es: " <<(v1-v2).toString() << std::endl;
                break;
            case '=':
                std::cout << "La igualdad  entre v1 = "<< v1.toString() << " y v2 = "<< v2.toString() << " es: " <<((v1==v2) ? "verdadero" : "falso") << std::endl;
                break;
            case '.':
                std::cout << "El producto punto entre v1 = " << v1.toString() << " y v2 = " << v2.toString() <<" es : " << (v1.dotProduct(v2)).toString() << std::endl;
                break;
            case 'x':
                std::cout << "El producto cruz entre v1 = " << v1.toString() << " y v2 = " << v2.toString() <<" es : " << (v1.crossProduct(v2)).toString() << std::endl;
                break;
            case 'm':
                std::cout << "El módulo de v1 = " << v1.toString() << " es : "<< v1.modulus()  <<
                                                                      " y el módulo de v2 = " << v2.toString() <<" es : " << v2.modulus() << std::endl;
                break;
            case 'e':
                break;
            default:
                std::cout << "No se puso una expresión válida, intente nuevamente" << std::endl;
                break;
        }
    }



}

int interactiveTestFirstPart(){
    std::cout << "Bienvenido al test interactivo de la parte 1, para salir del test presiona 'e' seguido de ENTER." << std::endl;

    char firstChoice= 'a';

    while(firstChoice != 'e'){
        std::cout << "Ingresa el test deseado (p para Point, v para Vector)" << std::endl;
        std::cin >> firstChoice;

        switch (firstChoice){
            case 'e':
                return 0;
            case 'p':
                pointTest();
                break;
            case 'v':
                vectorTest();
                break;
            default:
                std::cout << "No se puso una expresión válida, intente nuevamente" << std::endl;
                break;
        }
    }

    return 0;

}

int main() {
    simpleTest();
    interactiveTestFirstPart();
    return 0;
}

