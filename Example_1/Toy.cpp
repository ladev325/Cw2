#include "Toy.h"
#include <algorithm>
#include <fstream>
using namespace std;
using namespace Products;

Fun::Toy::Toy()
{
    name = "none";
    price = 0;
    manufacturer = "none";
    material_quality = 1;
    target_age = 0;
}

Fun::Toy::Toy(string name, int price, string manufacturer, int material_quality, int target_age)
{
    this->name = name;
    this->price = price;
    this->manufacturer = manufacturer;
    if (material_quality > 10) material_quality = 10;
    if(material_quality < 1) material_quality = 1;
    this->material_quality = material_quality;
    this->target_age = target_age;
}

Fun::Toy::~Toy()
{
}

void Fun::Toy::show() const
{
    cout << "Name: " << name << endl;
    cout << "Price: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Quality: " << material_quality << endl;
    cout << "Target age: " << target_age << endl;

}

float Fun::Toy::calcPrice() const
{
    int this_price = price + price * material_quality * 0.03;
    this_price += target_age < 3 ? this_price * 0.1 : 0;
    return this_price;
}

void Fun::Toy::saveToFile(std::ofstream& file) const
{
    file << "Toy" << endl;
    file << name << endl;
    file << price << endl;
    file << manufacturer << endl;
    file << material_quality << endl;
    file << target_age << endl;
}

void Fun::Toy::loadFromFile(std::ifstream& file)
{
    getline(file, name);
     file >> price;
    file.get();
    getline(file, manufacturer);
    file >> material_quality;
    file.get();
    file >> target_age;
    file.get();
}
