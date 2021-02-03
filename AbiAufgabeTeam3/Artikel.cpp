#include <string>
#include "Artikel.h"

using namespace std;

Artikel::Artikel(string bezeichnung, Mitglied* verkaeufer)
{
	this->bezeichnung = bezeichnung;
	this->verkaeufer = verkaeufer;
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
	return nullptr;
}

bool Artikel::istVerkauft()
{
	if (auktionsEnde->zsm() >= 20210203)
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
