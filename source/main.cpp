#include <iostream>
#include "../header/person.h"

using namespace std;

void getDataPerson(int &w, char &p, int &wi, int &wz);

int main()
{
    int waga;
    char plec;
    int wiek;
    int wzrost;
    getDataPerson(waga,plec,wiek,wzrost);

    Person osoba(waga, plec, wiek, wzrost);
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

void getDataPerson(int &w, char &p, int &wi, int &wz)
{

    cout << "Podaj wage" << endl;
    cin >> w;
    cout << "Podaj plec" << endl;
    cin >> p;
    cout << "Podaj wiek" << endl;
    cin >> wi;
    cout << "Podaj wzrost" << endl;
    cin >> wz;
}