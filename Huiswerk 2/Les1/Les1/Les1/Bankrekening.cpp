#include "Bankrekening.h"
#include <iostream>

Bankrekening::Bankrekening(string name, int saldo, int numberOfTransactions) {
	this->name = name;
	this->saldo = saldo;
	this->numberOfTransactions = numberOfTransactions;
}

Bankrekening::~Bankrekening() {

}

const string& Bankrekening::getName() const {
	return name;
}

int Bankrekening::getSaldo() const {
	return saldo;
}

int Bankrekening::getNumberOfTransactions() const {
	return numberOfTransactions;
}

void Bankrekening::TransactieHistory() {
	cout << "Transacties = " << getNumberOfTransactions() << endl;
	cout << "Saldo = " << getSaldo() << endl;
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const {
	return Bankrekening(name, saldo + transactie.getKosten(), numberOfTransactions + 1);
}

Bankrekening Bankrekening::operator-(const Transactie& transactie) const {
	return Bankrekening(name, saldo - transactie.getKosten(), numberOfTransactions + 1);
}

