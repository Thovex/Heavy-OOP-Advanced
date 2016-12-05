#pragma once
#include <string>
#include <time.h>
using namespace std;

class Transactie {
public:
	Transactie(int kosten, bool afschrijving, string time);
	int getKosten() const;
	bool getAfschrijving() const;
	string getTime() const;
private:
	int kosten;
	bool afschrijving;
	string time;

};

