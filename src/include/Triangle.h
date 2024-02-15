#include <cmath>

class Triangle{
    private:
        //float side1, side2, side3;
        float sides[3];
    public:
        float getSide1() {return sides[0];}
        float getSide2() {return sides[1];}
        float getSide3() {return sides[2];}

        Triangle(float s1, float s2, float s3){
            sides[0] = s1;
            sides[1] = s2;
            sides[2] = s3;
        }
        double getArea();
        bool largerThan(Triangle t2);
        static double sumAreas(Triangle triangles[], int size);
        static Triangle findLargest(Triangle triangles[], int size);
    };



