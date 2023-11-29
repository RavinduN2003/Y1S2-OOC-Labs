#include <iostream>

#define pi 3.14

using namespace std;

struct Circle {

    float radius;

};
struct Rectngle {


    float length;
    float width;

};
struct Square {

    float length;
};


float circleArea(struct Circle r);//taking struct variable as function prototype variable = r
float rectangleArea(struct Rectngle l, struct Rectngle w);//taking struct variable as function prototype variable = l,w
float squareArea(struct Square l);////taking struct variable as function prototype variable = l

int main()
{
    
    struct Circle c1; //declaring variable c1
    c1.radius = 5;//initializing value to the member

    struct Rectngle g, p;
    g.length = 28; //green rectangle
    g.width = 15;
    p.length = 7; //purple rectangle
    p.width = 3;

    struct Square le; //square 
    le.length = 4;



    float a1 = circleArea(c1); //calling for circle(we dont want do cl.length) because we use structuresfor both local functions and main function
    float a2 = rectangleArea(g, g); //calling big rectangle
    float a4 = rectangleArea(p, p); //calling small reactangle
    float a3 = squareArea(le); //calling square

    cout << "The Area of the Green Area is : " << a2 - (a1 + a4 + a3);//operation
}


float circleArea(struct Circle r) {

    return pi * r.radius * r.radius;

}
float rectangleArea(struct Rectngle l, struct Rectngle w) {

    return l.length * w.width;

}
float squareArea(struct Square l) {


    return l.length * l.length;

}