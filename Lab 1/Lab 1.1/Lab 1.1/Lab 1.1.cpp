#include <iostream>

using namespace std;

int main()
{
	int cm, inches;

	cout << "Enter the length in Centimeters : ";
	cin >> cm;

	inches = cm / 2.54;

	cout << "The Answer is : " << inches;

	return 0;

}
