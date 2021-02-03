#include "Auktionssystem.h"
#include "Mitglied.h"
#include <iostream>
using namespace std;

int main()
{
    Auktionssystem* auk1 = new Auktionssystem();

    Mitglied* m1 = new Mitglied("Peter", "peter@gmx.de");
    m1->setKennwort("Kennwort");
    m1->setOrt("Ort1");
    m1->setStrasse("Strasse1");


    Mitglied* m2 = new Mitglied("Adrian", "adrian@gmx.de");
    m2->setKennwort("Kennwort");
    m2->setOrt("Ort2");
    m2->setStrasse("Strasse2");

    Mitglied* m3 = new Mitglied("Daniel", "daniel@gmx.de");
    m3->setKennwort("Kennwort");
    m3->setOrt("Ort3");
    m3->setStrasse("Strasse3");

    Mitglied* m4 = new Mitglied("Jona", "jona@gmx.de");
    m4->setKennwort("Kennwort");
    m4->setOrt("Ort4");
    m4->setStrasse("Strasse4");


    auk1->anmelden();
    auk1->artikelEinstellen();
    
    auk1->anmelden();
    auk1->gebotAbgeben();

    auk1->anmelden();
    auk1->gebotAbgeben();



    return 0;
}