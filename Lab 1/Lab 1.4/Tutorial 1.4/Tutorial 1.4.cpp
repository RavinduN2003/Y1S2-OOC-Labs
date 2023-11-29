#include <iostream>

using namespace std;

int squre(int n);
int cube(int n);


int main()
{
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    cout<<"The Square is : "<<squre(num)<<endl;
    cout<<"The cube is : "<< cube(num);

}
int squre(int n) {

    return n * n;
}
int cube(int n) {

    return n * n * n;
}