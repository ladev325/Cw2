#pragma once
#include "Product.h"
#include <string>
namespace Products {
	namespace Fun {
		class Toy : public Product {
		public:
			Toy();
			Toy(string name, int price, string manufacturer, int material_quality, int target_age);
			~Toy();
			virtual void show()const override;
			virtual float calcPrice()const override;
			virtual void saveToFile(std::ofstream& file) const override;
			virtual void loadFromFile(std::ifstream& file) override;

		private:
			string name;
			int price;
			string manufacturer;
			int material_quality; // 1-10
			int target_age;
		};
	}
}