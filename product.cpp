#include "product.h"

Product::Product()
{
}

Product::Product(string link_, double protein_, double fat_, double fat_sat_,
                 double fiber_, double carbohydrates_, double calories_,
                 double price_kg_, double package_weigt_, double package_price_)
{
    link = link_;
    protein = protein_;
    fat = fat_;
    fat_sat = fat_sat_;
    fiber = fiber_;
    carbohydrates = carbohydrates_;
    calories = calories_;
    price_kg = price_kg_;
    package_weigt = package_weigt_;
    package_price = package_price_;
}

Product::~Product()
{
}

string Product::get_link()
{
    return link;
}

double Product::get_protein()
{
    return protein;
}

double Product::get_fat()
{
    return fat;
}

double Product::get_fat_sat()
{
    return fat_sat;
}

double Product::get_fiber()
{
    return fiber;
}

double Product::get_carbohydrates()
{
    return carbohydrates;
}

double Product::get_calories()
{
    return calories;
}

double Product::get_price_kg()
{
    return price_kg;
}

double Product::get_package_weigt()
{
    return package_weigt;
}

double Product::get_package_price()
{
    return package_price;
}
