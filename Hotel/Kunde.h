#pragma once
#include <iostream>

using namespace std;

class Kunde
{

private:
	int kundeNr;
	int gruppenNr;
	double geld;
	int Zimmer;
	string Name;

public:
	Kunde();
	Kunde(int kundeNr, int gruppenNr, double geld, string Name);
	~Kunde();


	int getkundeNr() { return kundeNr; };
	void setkundeNr(int a) { kundeNr = a; };

	int getgruppenNr() { return gruppenNr; };
	void setgruppenNr(int a) { gruppenNr = a; };

	double getgeld() { return geld;};
	void setgeld(double a) { geld = a; };

	int getZimmer() { return Zimmer; };
	void setZimmer(int a) { Zimmer = a; };

	string getName() { return Name; };
	void setName(string a) { Name = a; };
};

