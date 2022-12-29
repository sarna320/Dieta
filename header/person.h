#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
class Person
{
private:
    int weight;           // waga w kg
    char sex;             // plec k-kobieta, m-mezczyzna
    int age;              // wiek w latach
    int height;           // wzrost w cm
    int caloric_needs;    // zapotrzebowanie kalorzyczne w kcal
    double protein;       // białko w g
    double fat;           // tłuszcze w g
    double carbohydrates; // węglowodany w g
public:
    Person();                                              // konstruktor domyslny
    Person(int weight_, char sex_, int age_, int height_); // konstruktor bez podanych wymagan
    ~Person();                                             // dekonstruktor domyslny
    void calculate_caloric_needs();
    int get_weight();
    char get_sex();
    int get_age();
    int get_height();
    int get_caloric_needs();
    double get_protein();
    double get_fat();
    double get_carbohydrates();
};

#endif // PERSON_H
