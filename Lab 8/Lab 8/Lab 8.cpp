#include <iostream>
#include "Item.h"
#include "SalesPerson.h"

using namespace std;

int main()
{
	SalesPerson s1(25,"Ravindu");

	Item item1(1001,"Shampoo");
	Item item2(2002,"Conditioner");

	item1.setPrice(550);
	item2.setPrice(650);

	s1.calcSales(item1,item2);
	s1.printSales();


	return 0;

}
