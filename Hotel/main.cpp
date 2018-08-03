
#include "stdafx.h"
#include <iostream>
#include <thread>
#include "Hotel.h"

using namespace std;

int main()
{
	Hotel* hotel = new Hotel(0, 10,3);
	hotel->ZimmerZustandsAusgabe();

	for (int i = 0; i < 16; i++) {
		hotel->einRandomKundenErstellen();
	}
	hotel->belegteZimmerAusgabe();


	return 0;
}