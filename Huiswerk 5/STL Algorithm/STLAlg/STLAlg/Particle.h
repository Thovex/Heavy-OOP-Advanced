#pragma once

class Particle {
public:
	Particle(int i, bool alive);

	bool isAlive() const;

	int index;

private:
	bool alive;
};

