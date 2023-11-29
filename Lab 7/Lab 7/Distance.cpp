#include "Distance.h"
#include <iostream>

using namespace std;

Distance::Distance() {
	feet = 0;
	inches = 0;

}
Distance::Distance(int ft, float in) {

	feet = ft;
	inches = in;

}
void Distance::inputDistance() {

	cout << "Input Feets : ";
	cin >> feet;

	cout << "Input Inches : ";
	cin >> inches;

}
void Distance::printDistance() {

	cout << "The number of feets are : " << feet << endl;
	cout << "The number of inches are : " << inches << endl;

}
void Distance::addDistance(Distance d2, Distance d3) {

	inches = d2.inches + d3.inches;
	if (inches >= 12.0) {

		inches = inches - 12.0;
		feet++;

	}
	feet = feet + (d2.feet + d3.feet);
}
Distance::~Distance() {

	cout << endl << "Distance deleted with " << feet << " feets and " << inches << " inches." << endl;

}
