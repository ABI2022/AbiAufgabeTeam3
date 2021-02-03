#include "Auktionssystem.h"

Auktionssystem::Auktionssystem()
{
	benutzer = nullptr;
}

Auktionssystem::Auktionssystem(Mitglied* benutzer)
{
	this->benutzer = benutzer;
}

Auktionssystem::~Auktionssystem()
{
}

bool Auktionssystem::anmelden()
{
	cout << "Bitte geben sie ihren Namen ein!" << endl << ">";
	return false;
}

void Auktionssystem::gebotAbgeben()
{
}

void Auktionssystem::artikelEinstellen()
{
}

Mitglied* Auktionssystem::sucheMitglied(string name)
{
	return nullptr;
}

Artikel* Auktionssystem::sucheArtikel()
{
	return nullptr;
}