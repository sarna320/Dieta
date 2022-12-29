#include <iostream>
#include "../header/person.h"

using namespace std;

void getDataPerson(int &w, char &p, int &wi, int &wz);
void printPerson(Person per);

int main()
{
    int waga;
    char plec;
    int wiek;
    int wzrost;
    getDataPerson(waga, plec, wiek, wzrost);
    Person osoba(waga, plec, wiek, wzrost);
    printPerson(osoba);

    return 0;
}

void getDataPerson(int &w, char &p, int &wi, int &wz)
{

    cout << "Podaj wage" << endl;
    cin >> w;
    cout << "Podaj plec m lub k" << endl;
    cin >> p;
    cout << "Podaj wiek" << endl;
    cin >> wi;
    cout << "Podaj wzrost" << endl;
    cin >> wz;
    cout<<endl;
}

void printPerson(Person per)
{
    per.calculate_caloric_needs();
    cout << "Twoje dane:" << endl;
    cout << "Waga:" << per.get_weight() << endl;
    cout << "Wzrost: " << per.get_height() << endl;
    cout << "Plec: " << per.get_sex() << endl;
    cout << "Wiek: " << per.get_age() << endl
         << endl;

    cout << "Zapotrzebowanie kaloryczne: " << per.get_caloric_needs() << endl;
    cout << "Wegle: " << per.get_carbohydrates() << endl;
    cout << "Tluszcze: " << per.get_fat() << endl;
    cout << "Bialko: " << per.get_protein() << endl;
}