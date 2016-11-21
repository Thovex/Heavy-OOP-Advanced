#include "ContainerShip.h"

ContainerShip::ContainerShip(string name, int capacity, int load, int numberOfContainers){
	this->name = name;
	this->capacity = capacity;
	this->load = load;
	this->numberOfContainers = numberOfContainers;
}

ContainerShip::~ContainerShip() {

}

const string& ContainerShip::getName() const {
	return name;
}

int ContainerShip::getCapacity() const {
	return capacity;
}

int ContainerShip::getLoad() const {
	return load;
}

int ContainerShip::getNumberOfContainers() const {
	return numberOfContainers;
}

ContainerShip ContainerShip::operator+(const ShippingContainer& container) const {
	return ContainerShip(name, capacity, load+container.getCapacity(), numberOfContainers+1);
}

ContainerShip& ContainerShip::operator=(const ContainerShip & ship) {
	if (this != &ship) {
		cout << "assignment" << endl;

		this->name = ship.name;
		this->capacity = ship.capacity;
		this->load = ship.load;
		this->numberOfContainers = ship.numberOfContainers;
	}
	return *this;

}

ContainerShip & ContainerShip::operator+=(const ShippingContainer & container) {
	load = load + container.getCapacity;
	numberOfContainers++;

	return *this;
}

