#include "Product.h"

Products::Product::Product()
{
    price = 0;
    name = "none";
    age = 0;
    manufacturer = "none";
}

Products::Product::Product(string name, float price, string manufacturer, int age)
{
    this->name = name;
    this->price = price;
    this->manufacturer = manufacturer;
    this->age = age;
}

Products::Product::~Product()
{
}

void Products::Product::setName(string name)
{
}

void Products::Product::setPrice(float price)
{
    this->name = name;
}

void Products::Product::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Products::Product::setAge(int age)
{
    this->age = age;
}

string Products::Product::getName() const
{
    return name;
}

float Products::Product::getPrice()
{
    return price;
}

string Products::Product::getManufacturer()
{
    return manufacturer;
}

int Products::Product::getAge()
{
    return age;
}

void Products::Product::show() const
{
}

float Products::Product::calcPrice() const
{
    return 0.0f;
}

void Products::Product::saveToFile(std::ofstream& file) const
{
}

void Products::Product::loadFromFile(std::ifstream& file)
{
}
