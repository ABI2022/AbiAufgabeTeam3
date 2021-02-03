#pragma once
#include <iostream>
#include "Artikel.h"
#include "Mitglied.h"
using namespace std;

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

