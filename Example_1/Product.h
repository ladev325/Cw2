#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace Products {
	class Product {
	protected:
		string name;
		float price;
		string manufacturer;
		int age;
	public:
		Product();
		Product(string name, float price, string manufacturer, int age);
		virtual ~Product();

		void setName(string name);
		void setPrice(float price);
		void setManufacturer(string manufacturer);
		void setAge(int age);
		string getName()const;
		float getPrice();
		string getManufacturer();
		int getAge();

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
		virtual void saveToFile(std::ofstream& file) const = 0;
		virtual void loadFromFile(std::ifstream& file) = 0;
	};
}