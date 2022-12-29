#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;
class Product
{
private:
    string link;
    double protein;       // białko w g
    double fat;           // tłuszcze w g
    double fat_sat;       // tłuszcze nasycone w g
    double fiber;         // blonnik w g
    double carbohydrates; // węglowodany w g
    double calories;      // kalorie w kcal
    double price_kg;      // cena w zl za 1 kg
    double package_weigt; // ile w opakowaniu w g
    double package_price; // cena opakowania w zl
public:
    Product();
    Product(string link_, double protein_, double fat_, double fat_sat_,
            double fiber_, double carbohydrates_, double calories_,
            double price_kg_, double package_weigt_, double package_price_);
    ~Product();
    string get_link();
    double get_protein();
    double get_fat();
    double get_fat_sat();
    double get_fiber();
    double get_carbohydrates();
    double get_calories();
    double get_price_kg();
    double get_package_weigt();
    double get_package_price();
};
#endif // PRODUCT_H
