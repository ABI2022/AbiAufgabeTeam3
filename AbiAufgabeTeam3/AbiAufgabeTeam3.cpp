#include <iostream>
#include "Artikel.h"
#include "Auktionssystem.h"
#include "Date.h"
#include "Gebot.h"
#include "Mitglied.h"


int main()
{
    Mitglied* m1 = new Mitglied("Peter", "peter@gmx.de");
    m1->setKennwort("Kennwort");
    m1->setOrt("Ort1");
    m1->setStrasse("Strasse1");


    Mitglied* m2 = new Mitglied("Beate", "beate@gmx.de");
    m2->setKennwort("Kennwort");
    m2->setOrt("Ort2");
    m2->setStrasse("Strasse2");


    Auktionssystem* auk1 = new Auktionssystem();

    auk1->anmelden();
    auk1->artikelEinstellen();




   




    

    return 0;
}
