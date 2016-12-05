#pragma once
#include <string>
using namespace std;

class ShippingContainer
{
public:
	ShippingContainer(int capacity, string colour);
	int getCapacity() const;

	const string& getColour() const;
private:
	int capacity;
	string colour;

};

