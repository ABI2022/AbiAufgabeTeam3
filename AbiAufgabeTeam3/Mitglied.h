#pragma once
#include <iostream>
#include <list>
#include "Artikel.h"
using namespace std;

class Mitglied
{
private:
	string name;
	string kennwort;
	string strasse;
	string ort;
	string email;

	list<Gebot*> gebote;
 
	list<Artikel*> angebotenenArtikel;

	list<Artikel*> verkaufteArtikel;

public:
	Mitglied(string name, string email);
	Mitglied();
	~Mitglied();

	string getName();
	void setName(string name);

	string getKennwort();
	void setKennwort(string kennwort);

	string getStrasse();
	void setStrasse(string strasse);

	string getOrt();
	void setOrt(string ort);

	string getEmail();
	void setEmail(string email);

	List<Artikel*> getAngebotenenArtikel();

	List<Artikel*> getVerkaufteArtikel();

	void gebotHinzufuegen(Gebot gebot);

	void angebotenenArtikelHinzufuegen(Artikel artikel);

};