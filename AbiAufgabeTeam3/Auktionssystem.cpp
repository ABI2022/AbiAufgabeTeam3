#include "Auktionssystem.h"

Auktionssystem::Auktionssystem()
{
	benutzer = nullptr;
}

Auktionssystem::~Auktionssystem()
{
}

bool Auktionssystem::anmelden()
{
	string name = "";
	string kennwort = "";

	cout << "Bitte geben sie ihren Namen ein!" << endl << ">";
	cin >> name;
	cout << "Bitte geben sie ihr Kennwort ein!" << endl << ">";
	cin >> kennwort;

	for (auto m : mitglieder) {
		if (m->getName() == name && m->getKennwort() == kennwort) {
			benutzer = m;
			return true;
		}
	}

	return false;
}

void Auktionssystem::gebotAbgeben()
{
	double gebot = 0;
	string bezeichnung;
	Artikel* a;
	cout << "Bitte geben sie die Bezeichnung des Artikels ein!" << endl << ">";
	cin >> bezeichnung;
	a = this->sucheArtikel(bezeichnung);
	if (a->istVerkauft() == false) {
		cout << "Das Hoechstgebot liegt bei " << a->getHoechstesGebot()->getBetrag() << " Euro. Bitte geben sie ein hoeeres Gebot ab, sonst wird es nicht hinzugefuegt!" << endl << ">";
		cin >> gebot;
		if (gebot < a->getHoechstesGebot()->getBetrag()) {
			a->gebotHinzufuegen(new Gebot(benutzer, a, gebot));
		}
	}
}

void Auktionssystem::artikelEinstellen()
{
	string bezeichnung;
	string beschreibung;

	cout << "Bitte geben Sie eine Bezeichnung ein!" << endl << ">";
	cin >> bezeichnung;
	artikel.push_back(new Artikel(bezeichnung, benutzer));
}

Mitglied* Auktionssystem::sucheMitglied(string name)
{
	for (auto m : mitglieder) {
		if (m->getName() == name)
			return m;
	}
	return nullptr;
}

Artikel* Auktionssystem::sucheArtikel(string bezeichnung)
{
	for (Artikel* a : artikel) {
		if (a->getBezeichnung() == bezeichnung)
			return a;
	}
	return nullptr;
}