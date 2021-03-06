#include <iostream>
#include <ctime>
#include <random>

#include "Config.h"

#include "Bankrekening.h"
#include "Transactie.h"

#define AMOUNTTRANSACTIONTYPES 7;

int main() {

	Transactie transactie1 = Transactie(1500, true, "9/11/2001");
	Transactie transactie2 = Transactie(530, true, "11/9/2016");
	Transactie transactie3 = Transactie(800, true, "13/10/1995");
	Transactie transactie4 = Transactie(2800, false, "11/9/2016");
	Transactie transactie5 = Transactie(1350, false, "14/2/2013");

	Bankrekening bankRekening = Bankrekening("Saldo van Jesse", 1000, 0);

	Config bankrekening = Config(bankRekening.getName());

	string diglet;

	cout << "Name = " << bankRekening.getName() << endl;
	cout << "Transacties = " << bankRekening.getNumberOfTransactions() << endl;
	cout << "Saldo = " << bankRekening.getSaldo() << endl;
	cout << "*************************************************" << endl;

	std::srand(std::time(0));
	int random_variable = std::rand();

	for (int i = 0; i < 5; i++) {
		int randtransaction = rand() % AMOUNTTRANSACTIONTYPES;
		cout << "*************************************************" << endl;
		switch (randtransaction) {
			case 0:
				bankRekening = bankRekening + transactie1;
				cout << "Heyyy " << transactie1.getKosten() << " munies erbij." << endl;
				diglet = "Datum:" + transactie1.getTime();
				cout << diglet << endl;
				bankrekening.put("date be like: ", diglet);
				break;
			case 1:
				bankRekening = bankRekening + transactie2;
				cout << "Heyyy " << transactie2.getKosten() << " munies erbij." << endl;
				diglet = "Datum:" + transactie2.getTime();
				cout << diglet << endl;	
				bankrekening.put("date be like: ", diglet);
				break;
			case 2:
				bankRekening = bankRekening + transactie3;
				cout << "Heyyy " << transactie3.getKosten() << " munies erbij." << endl;
				diglet = "Datum:" + transactie3.getTime();
				cout << diglet << endl;
				bankrekening.put("date be like: ", diglet);
				break;
			case 3:
				bankRekening = bankRekening + transactie4;
				cout << "Nooooo " << transactie4.getKosten() << " munies eraf." << endl;
				diglet = "Datum:" + transactie4.getTime();
				cout << diglet << endl;
				bankrekening.put("date be like: ", diglet);
				break;
			case 4:
				bankRekening = bankRekening + transactie5;
				cout << "Nooooo " << transactie5.getKosten() << " munies eraf." << endl;
				diglet = "Datum:" + transactie5.getTime();
				cout << diglet << endl;			
				bankrekening.put("date be like: ", diglet);
				break;
		}
		cout << "*************************************************" << endl;
		bankRekening.TransactieHistory();


		
	}
	std::string str = std::to_string(bankRekening.getSaldo());
	cout << "*************************************************" << endl;

	cout << str << endl;
	bankrekening.put("monies be at", str);


	cout << bankrekening << endl;

	string input;
	cin >> input;

	return 0;
}