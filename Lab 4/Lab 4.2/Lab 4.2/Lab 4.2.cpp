#include <iostream>
using namespace std;

struct Rectngle {

    float length;
    float width;
};

void rectanglePerimeter(float l, float w, float& perimeter);//taking struct variable as function prototype variable = l,w
float cost(float perimeter, float costpunit);

int main()
{
    float perimeter,costPunit;

    struct Rectngle r1;
    r1.length = 28;
    r1.width = 15;
    
    rectanglePerimeter(r1.length,r1.width,perimeter);

    cout << "Enter the Cost per Unit : ";
    cin >> costPunit;

    float t = cost(perimeter, costPunit);

    cout <<endl <<  "The cost is : " << t;
}
void rectanglePerimeter(float l, float w, float& perimeter) {

    perimeter =  2 * (l + w);

}
float cost(float perimeter, float costpunit) {

    return perimeter * costpunit;

}


