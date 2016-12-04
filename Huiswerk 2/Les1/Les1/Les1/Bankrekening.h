#pragma once
#include "Transactie.h"
#include <string>
using namespace std;

class Bankrekening {
public:
	Bankrekening(string name, int capacity, int numberOfTransactions = 0);
	virtual ~Bankrekening();
	const string& getName() const;
	int getSaldo() const;
	int getNumberOfTransactions() const;
	void TransactieHistory();
	Bankrekening operator+(const Transactie& transactie) const;
	Bankrekening operator-(const Transactie& transactie) const;

private:
	string name;
	int saldo;
	int numberOfTransactions;
};

