#include <iostream>
#include "Parent.h"

Parent::Parent(const Parent* parent) {
	
}

Parent::Parent(string name) {
    this->name = name;
}

ostream& operator<<(ostream& os, const Parent& parent) {
	os << parent.name;
	return os;
}

void Parent::swap(Parent& other) {
	std::swap(this->name, other.name);
}

Parent& Parent::operator= (Parent other) {
	this->swap(other);
	return *this;
}


