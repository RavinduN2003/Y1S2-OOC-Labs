#include <iostream>

using namespace std;

void PassbyValue(int x, int y);
void PassbyReference(int& x, int& y);

int main()
{
	int a = 5, b = 6;


	
	//PassbyValue(a, b);
	PassbyReference(a, b);

	cout << "Answer in Main Method" << endl << "a : " << a << endl << "b : " << b << endl;


}
void PassbyValue(int x, int y) {

	x = x + 10;
	y = y + 10;

	cout << "Answer in Pass by Value" << endl << "a : " << x << endl << "b : " << y << endl;


}
void PassbyReference(int& x, int& y) {

	x = x + 10;
	y = y + 10;

	cout << "Answer in Pass by Reference" << endl << "a : " << x << endl << "b : " << y << endl;


}
