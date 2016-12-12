#include "Particle.h"

Particle::Particle(int index, bool alive) {
	this->index = index;
	this->alive = alive;
}


bool Particle::isAlive() const {
	return this->alive;
}
