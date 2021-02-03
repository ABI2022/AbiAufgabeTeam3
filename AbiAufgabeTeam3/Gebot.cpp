#include "Gebot.h"
Gebot::Gebot(Mitglied* bieter, Artikel* artikel, double betrag)
{
    this->betrag = betrag;
    this->bieter = bieter;
    this->artikel = artikel;
}



Gebot::~Gebot()
{
}



double Gebot::getBetrag()
{
    return betrag;
}

Mitglied* Gebot::getBieter()
{


Mitglied* Gebot::getBieter()
{
    return bieter;
}
