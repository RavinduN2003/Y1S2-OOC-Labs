#pragma once
class Item
{
private:
	int itemNo;
	char name[20];
	double price;

public:
	Item(int pitemNo, const char pName[20]);
	void setPrice(double pPrice);
	double calcTotal(int qty);
	~Item();
};

