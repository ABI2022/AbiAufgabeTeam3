#pragma once
#include <iostream>
#include <list>
using namespace std;
class Auktionssystem
{
private:
	Mitglied* benutzer;
	list<Mitglied*> mitglieder;
public:
	Auktionssystem();
	Auktionssystem(Mitglied* benutzer);
	~Auktionssystem();
	bool anmelden();
	void gebotAbgeben();
	void artikelEinstellen();
	Mitglied* sucheMitglied(string name);
	Artikel* sucheArtikel();
};

