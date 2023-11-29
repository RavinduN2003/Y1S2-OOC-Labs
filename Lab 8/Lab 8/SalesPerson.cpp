#include "SalesPerson.h"
#include <cstring>
#include <iostream>

using namespace std;

SalesPerson::SalesPerson(int PempNo, const char pNmae[20]) {

	empNo = PempNo;
	strcpy_s(name, pNmae);

}
void SalesPerson::calcSales(Item i1, Item i2) {

		int qty1, qty2;

		cout << "Enter Quantity for Item 1 : ";
		cin >> qty1;

		cout << "Enter Quantity for Item 2 : ";
		cin >> qty2;

		sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);//calculating sales for two items

}
void SalesPerson::printSales() {

	cout << "No : " << empNo << endl;
	cout << "Name : " << name << endl;
	cout << "Sales of two items : " << sales << endl;

}
SalesPerson::~SalesPerson() {



}