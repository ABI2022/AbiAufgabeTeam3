#include "Mitglied.h"

Mitglied::Mitglied(string name, string email)
{
    this->name = name;
    this->email = email;
}

Mitglied::Mitglied()
{
    name = "leer";
    kennwort = "leer";
    strasse = "leer";
    ort = "leer";
    email = "leer";
}

Mitglied::~Mitglied()
{
}

string Mitglied::getName()
{
    return name;
}

void Mitglied::setName(string name)
{
    this->name = name;
}

string Mitglied::getKennwort()
{
    return kennwort;
}

void Mitglied::setKennwort(string kennwort)
{
    this->kennwort = kennwort;
}

string Mitglied::getStrasse()
{
    return strasse;
}

void Mitglied::setStrasse(string strasse)
{
    this->strasse = strasse;
}

string Mitglied::getOrt()
{
    return ort;
}

void Mitglied::setOrt(string ort)
{
    this->ort = ort;
}

string Mitglied::getEmail()
{
    return email;
}

void Mitglied::setEmail(string email)
{
    this->email = email;
}

list<Artikel*> Mitglied::getAngebotenenArtikel()
{
    return angebotenenArtikel;
}

void Mitglied::gebotHinzufuegen(Gebot* neu)
{
    gebote.push_back(neu);
}

void Mitglied::angebotenenArtikelHinzufuegen(Artikel* neu)
{
    angebotenenArtikel.push_back(neu);
}


list<Artikel*> Mitglied::getVerkaufteArtikel()
{
    for (Artikel* x : angebotenenArtikel)
    {
        if (x->istVerkauft())
        {
            verkaufteArtikel.push_back(x);
        }
    }

    return verkaufteArtikel;
}