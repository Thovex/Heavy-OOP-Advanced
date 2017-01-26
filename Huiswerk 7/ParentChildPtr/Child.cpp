#include "Child.h"

Child::Child(string name) {
	this->name = name;
}

ostream& operator<<(ostream& os, const Child& child) {
	os << child.name;
	return os;
}