#pragma once
#pragma once
#include "Product.h"

namespace Products{
    namespace Sport{
        class Equipment : public Product{
        protected:
            string kindOf;
            float weight;
        public:
            Equipment(){
                kindOf = "undefined";
                weight = 0;
            };
            Equipment(string uname,float uprice,string umanufacturer,int uage, string ukindOf, float uweight) : Product(uname, uprice, umanufacturer, uage){
                kindOf = ukindOf;
                weight = uweight;
            };

            void setKindOf(string kindOf){this->kindOf = kindOf;};
            void setWeight(float weight){this->weight = weight;};

            string getKindOf()const{return kindOf;};
            float getWeight()const{return weight;};

            virtual void show()const override{
                cout << "\tEquipment\n";
                cout << "Name: " << name << endl;
                cout << "Price: " << price << endl;
                cout << "Manufacturer: " << manufacturer << endl;
                cout << "Age: " << age << endl;
                cout << "Kind of: " << kindOf << endl;
                cout << "Weight: " << weight << endl;
            };
            virtual float calcPrice()const override{
                float total = price;
                if (weight > 5){
                    total += (weight-5)*0.05;
                }if (age < 14){
                    total += price*0.1;
                }
                return total;
            };

            virtual void saveToFile(std::ofstream& file)const override{
                file << "Equipment" << endl;
                file << name << endl;
                file << price << endl;
                file << manufacturer << endl;
                file << age << endl;
                file << kindOf << endl;
                file << weight << endl;
            };
            virtual void loadFromFile(std::ifstream& file) override{
                getline(file, name);
                file >> price;
                file.get();
                getline(file, manufacturer);
                file >> age;
                file.get();
                getline(file, kindOf);
                file >> weight;
            };
        };
    }
}