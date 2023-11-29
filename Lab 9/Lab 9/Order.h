#pragma once
#include "Meal.h";
class Order
{
private:
	int  orderNo;
	Meal* meals;
	int count;
	int maxSize;

public:
	Order(int pID, int size);
	void addItem(int no, const char name[10],double pPrice);
	void calTotPrice();
	~Order();
};

