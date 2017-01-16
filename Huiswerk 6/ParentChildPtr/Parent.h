#pragma once

#include <string>
#include <ostream>
#include "Child.h"
#include <vector>

using namespace std;

class Parent {
public:

	Parent();
	Parent(const Parent* parent);
	Parent(string name);
	void swap(Parent & other);
	Parent& operator=(Parent other);
	friend ostream& operator<<(ostream& os, const Parent& parent);
	void getChild(Child& child);
	void printChildren();
	void deleteKid(int index);

	vector<Child> kidlist;

private:
	string name;
};
