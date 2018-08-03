#include "stdafx.h"
#include "Zimmer.h"


Zimmer::Zimmer()
{
}

Zimmer::Zimmer(int zimmerNr, int grosse, string qualitat) {
	this->zimmerNr = zimmerNr;
	this->grosse = grosse;
	this->qualitat = qualitat;
	this->belegt = false;
}


Zimmer::~Zimmer()
{
}
