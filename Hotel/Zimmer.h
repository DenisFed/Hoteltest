#pragma once
#include <iostream>

using namespace std;

class Zimmer
{

private:
	int zimmerNr;
	int grosse;
	string qualitat;
	bool belegt;


public:
	Zimmer();
	Zimmer(int zimmerNr, int grosse, string qualitat);
	~Zimmer();

	int getzimmerNr() {
		return zimmerNr;
	}

	int getgrosse() {return grosse;}

	string getqualitat() {return qualitat;}

	bool getbelegt() {return belegt;}
	void setbelegt(bool a) { belegt = a; }
};

