#pragma once

#include <list>
#include <string>


#include "Mitglied.h"
#include "Date.h"
#include "Gebot.h"
using namespace std;

class Artikel
{
private:
	string bezeichnung;
	string beschreibung;
	double startPreis;
	Date* auktionsEnde;
	bool verkauft;
	list<Gebot*> gebote;
	Mitglied* verkaeufer;

public:
	Artikel(string bezeichnung, Mitglied* verkaeufer);
	~Artikel();
	void gebotHinzufuegen(Gebot* gebot);
	Gebot* getHoechstesGebot();
	bool istVerkauft();
	string getBezeichnung();
	string getBeschreibung();
	double getStartpreis();
};

