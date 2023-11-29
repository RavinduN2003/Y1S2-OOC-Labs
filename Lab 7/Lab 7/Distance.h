#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	Distance();//default constructor
	Distance(int ft, float in);//overloaded constructor
	void inputDistance();
	void printDistance();
	void addDistance(Distance d2,Distance d3);//get two objects as parameters
	~Distance();
};

