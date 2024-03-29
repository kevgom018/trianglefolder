#include <cmath>
#include <string>
#include "include/Triangle.h"


std::string Triangle::triangleType(){
    if (this->getSide1() == this->getSide2() && this->getSide2() == this->getSide3()){
        return "EQUILATERAL";
    } else if (this->getSide1() == this->getSide2() ^ this->getSide2() == this->getSide3() ^ this->getSide1() == this->getSide3()){
        return "ISCOCELES";
    } else if (this->getSide1() != this->getSide2() && this->getSide2() != this->getSide3() && this->getSide1() != this->getSide3()){
        return "SCALENE";
    }
}

double Triangle::getArea(){
    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;
}

bool Triangle::largerThan(Triangle t2) {
    return (this->getArea() > t2.getArea());
}

double Triangle::sumAreas(Triangle triangles[], int size){
    double result = 0.0;
    for (int i = 0; i < size; i++){
        result += triangles[i].getArea();
    }
    return result;
}

Triangle Triangle::findLargest(Triangle triangles[], int size){
    Triangle largestTriangle = triangles[0];
    for (int i = 1; i < size; i++){
        if (triangles[i].getArea() > largestTriangle.getArea()){
            largestTriangle = triangles[i];
        }
    }
    return largestTriangle;
}

