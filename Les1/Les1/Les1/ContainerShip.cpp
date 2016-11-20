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

