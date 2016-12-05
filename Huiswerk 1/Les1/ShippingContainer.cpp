#include "ShippingContainer.h"

ShippingContainer::ShippingContainer(int capacity, string colour) {
	this->capacity = capacity;
	this->colour = colour;
}

const string& ShippingContainer::getColour() const {
	return colour;
}

int ShippingContainer::getCapacity() const {
	return capacity;
}
