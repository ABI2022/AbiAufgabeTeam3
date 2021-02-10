#include <string>
#include "Artikel.h"
#include <iostream>

using namespace std;

Artikel::Artikel(string bezeichnung, Mitglied* verkaeufer)
{
	double startpreis = 0;
	int jahr = 0;
	int monat = 0;
	int tag = 0;
	this->bezeichnung = bezeichnung;
	this->verkaeufer = verkaeufer;
	cout << "Bitte geben Sie einen Startpreis ein" << endl << ">";
	cin >> startpreis;
	cout << "Bitte geben sie ein Auktionsende ein JJJJ" << endl << ">";
	cin >> jahr;
	cout << "MM" << endl << ">";
	cin >> monat;
	cout << "TT" << endl << ">";
	cin >> tag;
	auktionsEnde = new Date(tag, monat, jahr);
	startPreis = startpreis;
}

Artikel::~Artikel()
{
}

void Artikel::gebotHinzufuegen(Gebot* gebot)
{
	gebote.push_back(gebot);
	gebot->getBieter()->gebotHinzufuegen(gebot);
}

Gebot* Artikel::getHoechstesGebot()
{
	double hoechste = 0;
	for (auto g : gebote) {
		if (g->getBetrag() >= hoechste)
			hoechste = g->getBetrag();
	}
	return nullptr;
}

bool Artikel::istVerkauft()
{
	if (auktionsEnde->zsm() >= 20210210)
		return true;
	else
		return false;
}

string Artikel::getBezeichnung()
{
	return bezeichnung;
}

string Artikel::getBeschreibung()
{
	return beschreibung;
}

double Artikel::getStartpreis()
{
	return startPreis;
}
