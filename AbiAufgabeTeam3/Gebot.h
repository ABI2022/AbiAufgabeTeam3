#pragma once

//#include "Mitglied.h"
//#include "Artikel.h"

class Mitglied; // Vorwärtsdeklaration
class Artikel;
class Gebot
{
private:
    double betrag;
    Mitglied* bieter;
    Artikel* artikel;

public:
    Gebot(Mitglied* bieter, Artikel* artikel, double betrag);
    ~Gebot();
    double getBetrag();
    Mitglied* getBieter();
};