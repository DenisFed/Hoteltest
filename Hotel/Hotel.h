#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Zimmer.h"
#include "Kunde.h"

using namespace std;


class Hotel
{

private:
	int HotelNr;
	vector<Zimmer> ZimmerListe;
	vector<Kunde> KundenListe;
public:
	Hotel();
	Hotel(int HotelNr, int breite, int hoehe);
	~Hotel();

	void ZimmerZustandsAusgabe();
	void belegteZimmerAusgabe();
	void KundeAusZimmerEntfernen(int knr);

	void einRandomKundenErstellen();
};



