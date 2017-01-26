#include <iostream>
#include "Parent.h"

Parent::Parent() {
	//Default Constructor
}


Parent::Parent(int value, string name) {
	this->value = value;
	this->name = name;
}

Parent::Parent(const Parent* parent) {

}

void Parent::reinitialize(int value, string name) {
	this->value = value;
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

Parent::Parent(Parent&& p) noexcept {
	value = p.value;
	name = p.name;

	p.value = 0;
	p.name = "NONE";
}

Parent& Parent::operator=(Parent&& p) {
	if (this != &p) {
		this->value = p.value;
		this->name = p.name;

		p.value = 0;
		p.name = "NONE";
	}

	return *this;
}
