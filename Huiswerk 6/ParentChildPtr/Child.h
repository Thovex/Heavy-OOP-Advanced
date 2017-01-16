#pragma once

#include <string>
#include <ostream>

using namespace std;

class Child {
public:
	Child(string name);
	string name;
	friend ostream& operator<<(ostream& os, const Child& child);
};

