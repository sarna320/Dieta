#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Person osoba(94, 'm', 23, 180);
    osoba.calculate_caloric_needs();
    cout << "Twoje dane:" << endl;
    cout << "Waga:" << osoba.get_weight() << endl;
    cout << "Wzrost: " << osoba.get_height() << endl;
    cout << "Plec: " << osoba.get_sex() << endl;
    cout << "Wiek: " << osoba.get_age() << endl
         << endl;

    cout << "Zapotrzebowanie kaloryczne: " << osoba.get_caloric_needs() << endl;
    cout << "Wegle: " << osoba.get_carbohydrates() << endl;
    cout << "Tluszcze: " << osoba.get_fat() << endl;
    cout << "Bialko: " << osoba.get_protein() << endl;

    return 0;
}
