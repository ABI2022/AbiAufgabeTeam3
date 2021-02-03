#include "Artikel.h"

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

}

Gebot* Artikel::getHoechstesGebot()
{
	return nullptr;
}

bool Artikel::istVerkauft()
{
	if (auktionsEnde.)
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
