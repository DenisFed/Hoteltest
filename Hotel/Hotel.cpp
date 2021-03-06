// Hotel.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Hotel.h"



Hotel::Hotel()
{
}

Hotel::Hotel(int HotelNr, int breite, int hoehe) {
	this->HotelNr = HotelNr;
	hoehe++;
	breite++;
	
	for (int i = 1; i < hoehe; i++) {
		for (int j = 1; j < breite; j++) {

			int zimmerNr = (i * 100) + j;
			int grosse = rand() % 4 + 2;     // grosse in the range 2 to 5
			string qualitat;

			if (i == 1) {
				qualitat = "gut";
			}
			else {
				qualitat = "durchsnittlich";
			}
			

			Zimmer* newZimmer = new Zimmer(zimmerNr, grosse, qualitat);
			ZimmerListe.push_back(*newZimmer);

		}
	}


}


Hotel::~Hotel()
{
}


void Hotel::ZimmerZustandsAusgabe() {

	for(unsigned int i = 0; i < ZimmerListe.size(); i++){
		cout << "---" << ZimmerListe.at(i).getzimmerNr() << "---" << endl;
		cout << "Groesse: " << ZimmerListe.at(i).getgrosse() << endl;
		cout << "Qualitaet: " << ZimmerListe.at(i).getqualitat() << endl;
		if(ZimmerListe.at(i).getbelegt()){
			cout << "Belegt: true" << endl;
		} else {
			cout << "Belegt: false" << endl;
		}
		cout << "---------" << endl;
	}

}

void Hotel::belegteZimmerAusgabe()
{
	for (unsigned int i = 0; i < ZimmerListe.size(); i++) {
		if (ZimmerListe.at(i).getbelegt() == true) {
			int knr = -1;
			for (unsigned int j = 0; j < KundenListe.size(); j++) {
				if (KundenListe.at(j).getZimmer() == ZimmerListe.at(i).getzimmerNr() ) {
					knr = KundenListe.at(j).getkundeNr();
				}
			}
			cout << "Zimmer " << ZimmerListe.at(i).getzimmerNr() << " ist belegt von " << knr << "." << endl;
		}
	
	}
}

void Hotel::KundeAusZimmerEntfernen(int knr)
{
	
	Kunde* k = NULL;
	for (unsigned int i = 0; i < KundenListe.size();i++) {		//Suche Kunde
		if (KundenListe.at(i).getkundeNr() == knr) {
			k = &KundenListe.at(i);
			break;
		}
	}

	if (k != NULL) {									//Wenn Kunde vorhanden dann setzte Belegstatus auf false und Zimmer vom Kunde auf 0
		for (unsigned int i = 0; i < ZimmerListe.size(); i++) {
			if (ZimmerListe.at(i).getzimmerNr() == k->getZimmer()) {
				ZimmerListe.at(i).setbelegt(false);
				break;
			}
		}
		k->setZimmer(0);
	}

	
}

void Hotel::einRandomKundenErstellen()
{
	int kundeNr = KundenListe.size();
	int gruppenNr = 0;
	double geld = 100;
	string Name = "Peter";

	Kunde *newKunde = new Kunde(kundeNr, gruppenNr, geld, Name);

	//Zimmer zuweisen
	for (unsigned int i = 0; i < ZimmerListe.size(); i++) {
		if (ZimmerListe.at(i).getbelegt() == false) {
			ZimmerListe.at(i).setbelegt(true);
			newKunde->setZimmer(ZimmerListe.at(i).getzimmerNr());
			break;
		}
	}

	KundenListe.push_back(*newKunde);
}
