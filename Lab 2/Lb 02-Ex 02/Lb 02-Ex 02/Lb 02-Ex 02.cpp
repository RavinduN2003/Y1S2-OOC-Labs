#include <iostream>

using namespace std;

struct Rectangle{
	
	int length;
	int width;

};

float area(struct Rectangle r);

int main()
{
	struct Rectangle yard;
	struct Rectangle house;

	cout << "Enter the Length and the width of the Yard : ";
	cin >> yard.width,yard.length;

	cout << "Enter the Length and the width of the Yard : ";
	cin >> house.width, house.length;

	float yardArea = area(yard);
	float houseArea = area(house);

	float newArea = yardArea - houseArea;

	cout << "The Area is : " << newArea;

	return 0;

}
float area(struct Rectangle r) {

	return r.width * r.length;

}