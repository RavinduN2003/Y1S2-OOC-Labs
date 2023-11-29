#include <iostream>

using namespace std;

int main()
{

    int n;

    cout<<"Enter a Number : ";
    cin >> n;

    for (int i = 1; i <= 12; i++) {

        cout << n << " x " << i << " = " << n * i;
        cout << endl;

    }

    return 0;

}
