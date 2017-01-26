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
	Parent(int value, string name);
	Parent(Parent && other) noexcept;

	Parent & operator=(Parent && other);
	Parent& operator=(Parent other);
	friend ostream& operator<<(ostream& os, const Parent& parent);

	void reinitialize(int value, string name);
	void getChild(Child& child);
	void printChildren();
	void deleteKid(int index);
	void swap(Parent & other);

	vector<Child> kidlist;

private:
	string name;
	int value;
};
