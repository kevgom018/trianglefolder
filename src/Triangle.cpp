#include <cmath>
#include "include/Triangle.h"


// string triangleType(Triangle t1){
//     if (t1.side1 == t1.side2 && t1.side2 == t1.side3){
//         return "EQUILATERAL";
//     } else if (t1.side1 == t1.side2 ^ t1.side2 == t1.side3 ^ t1.side1 == t1.side3){
//         return "ISCOCELES";
//     } else if (t1.side1 != t1.side2 && t1.side2 != t1.side3 && t1.side1 != t1.side3){
//         return "SCALENE";
//     }
// }

double triangleArea(Triangle t1){
    double s = (t1.getSide1() + t1.getSide2() + t1.getSide3()) / 2;
    double area = sqrt(s * (s - t1.getSide1()) * (s - t1.getSide2()) * (s - t1.getSide3()));
    return area;
}

bool largerThan(Triangle t1, Triangle t2) {
    return (triangleArea(t1) > triangleArea(t2));
}

double sumAreas(Triangle triangles[], int size){
    double result = 0.0;
    for (int i = 0; i < size; i++){
        result += triangleArea(triangles[i]);
    }
    return result;
}

Triangle findLargest(Triangle triangles[], int size){
    Triangle largestTriangle = triangles[0];
    for (int i = 1; i < size; i++){
        if (triangleArea(triangles[i]) > triangleArea(largestTriangle)){
            largestTriangle = triangles[i];
        }
    }
    return largestTriangle;
}

