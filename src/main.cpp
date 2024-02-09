#include <iostream>
#include <cmath>
#include <string>
#include "include/Triangle.h"

using namespace std;

int main(){
    Triangle t1(10, 10, 10);
    double area1 = triangleArea(t1);
    cout << "Area of t1: " << area1 << endl;
    Triangle t2(20, 20, 20);
    double area2 = triangleArea(t2);
    cout << "Area of t2: " << area2 << endl;
    if (largerThan(t1, t2)){
        cout << "First triangle is larger." << endl;
    } else {
        cout << "First triangle is NOT larger." << endl;
    }
    return 0;
}
