#pragma once
#include "Product.h"
namespace Products {
 namespace Sport {
  class Clothing : public Products::Product
  {
  protected:
   string type;
   float size;
  public:
   Clothing() {
    type = "undefined";
    size = 0;
   };
   Clothing(string name, float price, string manufacturer, int age, string type, float size) : Product(name,price,manufacturer,age) {
    this->type = type;
    this->size = size;
   };

   void setType(string type) {
    this->type = type;
   };
   void setSize(float size) {
    this->size = size;
   }
   string getType() const {
    return type;
   }
   float getSize() const {
    return size;
   }

   virtual void show() const override{
    cout << "Clothing:\n";
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Age: " << age << endl;
    cout << "Type of clothing: " << type << endl;
    cout << "Size: " << size << endl;
   };

   virtual float calcPrice() const override {
    float total = price;
    if (size > 134)
    {
     total += price * 0.05;
    }
    if (age >= 10) {
     total += price * 0.1;
    }
    return total;
   };

   virtual void saveToFile(std::ofstream& file) const override {
    file << "Clothing\n";
    file << name << endl;
    file << price << endl;
    file << manufacturer << endl;
    file << age << endl;
    file << type << endl;
    file << size << endl;
   };

   virtual void loadFromFile(std::ifstream& file) override {
    getline(file, name);
    file >> price;
    file.get();
    getline(file, manufacturer);
    file >> age;
    file.get();
    getline(file, type);
    file >> size;
   };
  };
 }
}