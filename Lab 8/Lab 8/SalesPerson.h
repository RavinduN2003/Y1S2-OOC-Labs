#pragma once
#include "item.h"


class SalesPerson
{
private:
	int empNo;
	char name[20];
	double sales;

public:
	SalesPerson(int PempNo, const char pNmae[20]);
	void calcSales(Item i1,Item i2);
	void printSales();
	~SalesPerson();

};

