#include "../header/partofmeal.h"

PartOfMeal::PartOfMeal()
{
}
PartOfMeal::PartOfMeal(int quantity_)
{
    quantity=quantity_;
}
PartOfMeal::~PartOfMeal()
{
}
void PartOfMeal::setProduct(Product &adr)
{
    p= &adr;
}