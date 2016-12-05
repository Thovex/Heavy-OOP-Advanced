#include <iostream>
#include <ctime>
#include <random>

#include "ContainerShip.h"
#include "ShippingContainer.h"

#include "Bankrekening.h"
#include "Transactie.h"

#define AMOUNTTRANSACTIONTYPES 7;

int main() {

	Transactie transactie1 = Transactie(1500, true, "9/11/2001");
	Transactie transactie2 = Transactie(530, true, "11/9/2016");
	Transactie transactie3 = Transactie(800, true, "13/10/1995");
	Transactie transactie4 = Transactie(50, true, "14/2/2013");
	Transactie transactie5 = Transactie(1200, true, "18/7/2014");

	Transactie transactie6 = Transactie(2800, false, "11/9/2016");
	Transactie transactie7 = Transactie(1350, false, "14/2/2013");

	Bankrekening bankRekening = Bankrekening("Saldo van Jesse", 1000, 0);

	cout << "Name = " << bankRekening.getName() << endl;
	cout << "Transacties = " << bankRekening.getNumberOfTransactions() << endl;
	cout << "Saldo = " << bankRekening.getSaldo() << endl;
	cout << "*************************************************" << endl;

	std::srand(std::time(0));
	int random_variable = std::rand();

	for (int i = 0; i < 5000; i++) {
		int randtransaction = rand() % AMOUNTTRANSACTIONTYPES;
		cout << "*************************************************" << endl;
		switch (randtransaction) {
			case 0:
				bankRekening = bankRekening + transactie1;
				cout << "Heyyy " << transactie1.getKosten() << " munies erbij." << endl;
				cout << "Datum: " << transactie1.getTime() << endl;
				break;
			case 1:
				bankRekening = bankRekening + transactie2;
				cout << "Heyyy " << transactie2.getKosten() << " munies erbij." << endl;
				cout << "Datum: " << transactie2.getTime() << endl;
				break;
			case 2:
				bankRekening = bankRekening + transactie3;
				cout << "Heyyy " << transactie3.getKosten() << " munies erbij." << endl;
				cout << "Datum: " << transactie3.getTime() << endl;
				break;
			case 3:
				bankRekening = bankRekening + transactie4;
				cout << "Heyyy " << transactie4.getKosten() << " munies erbij." << endl;
				cout << "Datum: " << transactie4.getTime() << endl;
				break;
			case 4:
				bankRekening = bankRekening + transactie5;
				cout << "Heyyy " << transactie5.getKosten() << " munies erbij." << endl;
				cout << "Datum: " << transactie5.getTime() << endl;
				break;
			case 5:
				bankRekening = bankRekening + transactie6;
				cout << "Nooooo " << transactie6.getKosten() << " munies eraf." << endl;
				cout << "Datum: " << transactie6.getTime() << endl;
				break;
			case 6:
				bankRekening = bankRekening + transactie7;
				cout << "Nooooo " << transactie7.getKosten() << " munies eraf." << endl;
				cout << "Datum: " << transactie7.getTime() << endl;
				break;
		}
		cout << "*************************************************" << endl;
		bankRekening.TransactieHistory();
	}

	string input;
	cin >> input;

	return 0;
}