#include <iostream>
#include "RectangleX.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main()
{
    
    Circle c1;
    RectangleX rec,rec1;
    Square s1;

    rec.setLength(7);
    rec.setWidth(2);

    c1.setRadius(5);

    rec1.setLength(18);
    rec1.setWidth(10);

    s1.setLength(4);

    cout << "The Area of the garden is : " << rec1.calcArea() - (rec.calcArea() + c1.calcArea()) << endl;
    cout << "The Area of the garden with the square is : " << rec1.calcArea() - (rec.calcArea() + c1.calcArea() + s1.calcArea());
}

