#pragma once

#include <list>


#include "Mitglied.h"
#include "Date.h"
#include "Artikel.h"

class Auktionssystem
{
private:
	Mitglied* benutzer;
	list<Mitglied*> mitglieder;
	list<Artikel*> artikel;
public:
	Auktionssystem();
	~Auktionssystem();
	bool anmelden();
	void gebotAbgeben();
	void artikelEinstellen();
private:
	Mitglied* sucheMitglied(string name);
	Artikel* sucheArtikel(string bezeichnung);
};

