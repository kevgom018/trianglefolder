#include <iostream>
#include <cmath>
#include <string>
#include "include/Triangle.h"

using namespace std;

int main(){
    Triangle t1(10, 10, 10);
    double area1 = t1.getArea();
    cout << "Area of t1: " << area1 << endl;
    Triangle t2(20, 20, 20);
    double area2 = t2.getArea();
    cout << "Area of t2: " << area2 << endl;
    Triangle t3(30,25,10);
    double area3 = t3.getArea();
    cout << "Area of t3: " << area3 << endl;
    if (t1.largerThan(t2)){
        cout << "First triangle is larger." << endl;
    } else {
        cout << "First triangle is NOT larger." << endl;
    }
    Triangle tArray[3] {t1, t2, t3};
    cout << "The sum of the areas is: " << Triangle::sumAreas(tArray, 3);
    return 0;
}
