#include "Game.h"

using namespace Products;
using namespace Fun;
Game::Game() { 
    players = 0;
}
Game::Game(string name, float price, string manufacturer, int age, int players)
:Products::Product(name, price, manufacturer, age)
{
    this->players = players;
}

void Game::setPlayers(int players) { 
    this->players = players;;
}
int Game::getPlayers() const { 
    return players;;
}
void Game::show() const {
    cout<<"===== Game =====\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Manufacturer: "<<manufacturer<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Players: "<<players<<endl;
}
float Game::calcPrice() const {
    float finalPrice = 0;
    if (players > 2) {
        int extraPlayers = players - 2;
        finalPrice += price * 0.05 * extraPlayers;
        }
    return finalPrice;
}
void Game::saveToFile(std::ofstream &file) const {
    file<<"Game\n";
    file << name << '\n'
<< price << '\n'
<< manufacturer << '\n'
<< age << '\n'
<< players << '\n';
}
void Game::loadFromFile(std::ifstream& file) {
    getline(file, name);
    file >> price;
    file.ignore();
    getline(file, manufacturer);
    file >> age;
    file >> players;
}

