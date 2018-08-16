
#include "stdafx.h"
#include <iostream>
#include <thread>
#include "Hotel.h"

using namespace std;

int main()
{
	Hotel* hotel = new Hotel(0, 10,3);
	//hotel->ZimmerZustandsAusgabe();

	for (int i = 0; i < 16; i++) {
		hotel->einRandomKundenErstellen();
	}
	hotel->belegteZimmerAusgabe();

	cout << "Kunden werden rausgeschmissen" << endl;
	hotel->KundeAusZimmerEntfernen(0);
	hotel->KundeAusZimmerEntfernen(2);
	hotel->KundeAusZimmerEntfernen(6);
	hotel->KundeAusZimmerEntfernen(10);
	hotel->KundeAusZimmerEntfernen(12);
	hotel->KundeAusZimmerEntfernen(16);

	hotel->belegteZimmerAusgabe();


	return 0;
}