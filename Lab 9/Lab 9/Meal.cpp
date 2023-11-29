#include "Meal.h"
#include <cstring>

Meal::Meal() {

	orderNo = 0;
	strcpy_s(description, "");
	price = 0;


}
void Meal::setDetails(int no, const char pDesc[50]) {

	orderNo = no;
	strcpy_s(description, pDesc);

}
void Meal::setPrice(double pPrice) {

	 price = pPrice;
}
double Meal::getPrice() {

	return price;

}
Meal::~Meal() {



}