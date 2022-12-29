#include "../header/person.h"

Person::Person()
{
}

Person::Person(int weight_, char sex_, int age_, int height_)
{
    weight = weight_;
    sex = sex_;
    age = age_;
    height = height_;
}

Person::~Person()
{
}

void Person::calculate_caloric_needs()
{
    if (sex == 'm')
    {
        caloric_needs = 66.47 + 13.75 * weight + 5 * height - 6.75 * age; // Do obliczania BMR służy między innymi wzór Harrisa i Benedicta, w kcal
        protein = 1.6 * weight;                                           // bialko w g
        fat = 0.20 * caloric_needs / 9;                                   // tluszcze w g
        carbohydrates = (caloric_needs - (protein * 4) - (fat * 9)) / 4;  // wegle w g
    }
}

int Person::get_weight()
{
    return weight;
}

char Person::get_sex()
{
    return sex;
}

int Person::get_age()
{
    return age;
}

int Person::get_height()
{
    return height;
}

int Person::get_caloric_needs()
{
    return caloric_needs;
}

double Person::get_protein()
{
    return protein;
}

double Person::get_fat()
{
    return fat;
}

double Person::get_carbohydrates()
{
    return carbohydrates;
}
