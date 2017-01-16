#include <iostream>
#include "Parent.h"

Parent::Parent() {
	//Default Constructor
}


Parent::Parent(string name) {
	this->name = name;
}

Parent::Parent(const Parent* parent) {

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

void Parent::getChild(Child & child) {
	kidlist.push_back(child);
}

void Parent::printChildren() {
	std::cout << "-------------------------------" << "\n";
	std::cout << name << "'s KIDS: " << "\n";
	for (int i = 0; i < kidlist.size(); i++) {
		std::cout << kidlist[i].name << "\n";
	}
}

void Parent::deleteKid(int index) {
	kidlist.erase(kidlist.begin() + index);
}
