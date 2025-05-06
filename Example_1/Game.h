#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Product.h"

using namespace std;
namespace Products {
    namespace Fun {
        class Game : public Product {
        protected:
            int players;
        public:
            Game();
            Game(string name, float price, string manufacturer, int age, int players);

            void setPlayers(int players);
            int getPlayers()const;
            virtual void show()const override;
            virtual float calcPrice()const override;
            virtual void saveToFile(std::ofstream& file) const override;
            virtual void loadFromFile(std::ifstream& file) override;
        };
    }
}