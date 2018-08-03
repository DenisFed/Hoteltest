#include "stdafx.h"
#include "Kunde.h"


Kunde::Kunde()
{
}

Kunde::Kunde(int kundeNr, int gruppenNr, double geld, string Name)
{
	this->kundeNr = kundeNr;
	this->gruppenNr = gruppenNr;
	this->geld = geld;
	this->Name = Name;
	Zimmer = 0;
}


Kunde::~Kunde()
{
}
