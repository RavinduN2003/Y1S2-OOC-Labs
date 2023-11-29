#include "Item.h"
#include <cstring>
#include <iostream>

using namespace std;

Item::Item(int pitemNo, const char pName[20]) {

	itemNo = pitemNo;
	strcpy_s(name,pName);

}
void Item::setPrice(double pPrice) {

	price = pPrice;
}
double Item::calcTotal(int qty) {

	return qty * price;
}
Item::~Item() {





}