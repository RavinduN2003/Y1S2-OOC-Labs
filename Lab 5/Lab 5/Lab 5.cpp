#include <iostream>
#include "ShapeArea.h"

using namespace std;

int main()
{
    struct Circle c1;
    c1.radius = 5;

    struct Rectangle g, p;
    g.length = 28;
    g.width = 15;

    p.length = 7;
    p.width = 3;

    struct square s1;
    s1.length = 4;

    float a1 = areaCircle(c1.radius);
    float a2 = arearectangle(g.length, g.width);
    float a3 = arearectangle(p.length,p.width);
    float a4 = areaSquare(s1.length);


    cout << "The Area of the Green Area is : " << a2 - (a1 + a3 + a4);



    return 0;

}

