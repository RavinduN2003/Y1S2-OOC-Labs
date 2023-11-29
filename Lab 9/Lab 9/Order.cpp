#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(int pID, int size) {

	orderNo = pID;
	maxSize = size;
	meals = new Meal[size];
	count = 0;
}
void Order::addItem(int no, const char name[10], double pPrice) {

	if (count < maxSize) {

		meals[count].setDetails(no, name);
		meals[count].setPrice(pPrice);
		count++;
	}
	else {
		cout << "Cannot enter anymore items" << endl;
	}

}
void Order::calTotPrice() {

	double total = 0.00;

	for (int i = 0; i < count; i++) {

		total += meals[i].getPrice();
	}
	cout << "Total Price: " << total << " Dollars" << endl;
}
Order::~Order() {



}