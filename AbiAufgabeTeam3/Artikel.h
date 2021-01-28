#pragma once
#include <iostream>
#include <list>
using namespace std;

#include "Mitglied.h"
#include "Date.h"
#include "Gebot"

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

