#ifndef PARTOFMEAL_H
#define PARTOFMEAL_H

#include <iostream>
#include "product.h"

using namespace std;
class PartOfMeal
{
private:
    int quantity; // ilosc produktu w g
    Product *p;   // wskaznik na produkt
public:
    PartOfMeal();                  // konstruktor domyslny
    PartOfMeal(int quantity_);      // konstruktor bez podanych wymagan
    ~PartOfMeal();                 // dekonstruktor domyslny
    void setProduct(Product &adr); // ustawia wskaznik na produkt
};

#endif // PARTOFMEAL_H
