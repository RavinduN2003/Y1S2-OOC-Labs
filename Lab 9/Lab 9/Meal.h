#pragma once
class Meal
{
private:
	int orderNo;
	char description[50];
	double price;

public:
	Meal();
	void setDetails(int no, const char pDesc[50]);
	void setPrice(double pPrice);
	double getPrice();
	~Meal();
};

