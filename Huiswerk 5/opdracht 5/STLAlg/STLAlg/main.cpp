#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <functional>
#include <numeric>

#include "Particle.h"

using namespace std;

// aanpak 1: met een gewone function
bool isDead(Particle p) {
	return !p.isAlive();
};

// aanpak 2: met een 'Function Object' (functor)
class IsParticleDead {
public:
	bool operator()(Particle p) const {
		return !p.isAlive();
	}
};

void dumpParticles(const string header, const vector<Particle>& particles) {
	cout << header << endl;
	for (int j = 0; j < particles.size(); ++j) {
		cout << "Particle #" << particles[j].index << " is " << particles[j].isAlive() << endl;
	}
}

int main() {
	vector<Particle> particles;

	vector<int> tv{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// vul met wat particles, om-en-om dead & alive
	for (int i = 0; i < 10; ++i) {
		particles.push_back(Particle(i, i % 2 == 0));
	}

	dumpParticles(" ======== BEGIN", particles);

	vector<Particle>::iterator newEnd;

	// drie keer een verschillende aanpak voor hetzelfde:

	// aanpak 1: met een function
	newEnd = std::remove_if(particles.begin(), particles.end(), isDead);	
	
	std::swap(particles.at(0), particles.at(1));

	particles.pop_back();


	int sum = std::accumulate(tv.begin(), tv.end(), 0);
	int product = std::accumulate(tv.begin(), tv.end(), 1, std::multiplies<int>());
	int avg = sizeof(tv) / sizeof(tv[0]);

	cout << avg << endl;
	cout << sum << endl;
	cout << product << endl;

	// aanpak 2: met een Function Object
	//    newEnd = std::remove_if(particles.begin(), particles.end(), IsParticleDead());

	// aanpak 3: met een lambda expression
	//    newEnd = std::remove_if(particles.begin(), particles.end(), [](const Particle& p) { return !p.isAlive(); });

	// dit geeft een vreemd resultaat, want volgens de spec is alles tussen newEnd en 't 'echte' einde nu 'undefined'
	dumpParticles(" ======== NA std::remove_if", particles);

	particles.erase(newEnd, particles.end());

	dumpParticles(" ======== EIND", particles);

	string input;
	cin >> input;

	return 0;
}