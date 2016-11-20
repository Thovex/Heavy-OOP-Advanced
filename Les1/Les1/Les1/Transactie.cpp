#include "Transactie.h"

Transactie::Transactie(int kosten, bool afschrijving, string time) {
	this->kosten = kosten;
	this->afschrijving = afschrijving;
	this->time = time;
}

int Transactie::getKosten() const {
	return kosten;
}

bool Transactie::getAfschrijving() const {
	return afschrijving;
}

string Transactie::getTime() const {
	return time;
}

