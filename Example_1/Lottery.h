#pragma once
#include "Clothing.h"
#include "Game.h"
#include "Equipment.h"
#include "Toy.h"
#include <vector>

class Lottery{
private:
    vector<Products::Product*> arr; 
public:
    Lottery(){
        ifstream file("Shop.txt");
        Products::Product* obj = nullptr;
        if (file.is_open()) {
        string type;

        while (!file.eof()) {
            getline(file, type);

            if (type == "Toy") {  obj = new Products::Fun::Toy();  }
            else if (type == "Game") {  obj = new Products::Fun::Game();  }
            else if (type == "Equipment") { obj = new Products::Sport::Equipment(); }
            else if (type == "Clothing") { obj = new Products::Sport::Clothing(); }
            else continue;

            obj->loadFromFile(file);
            arr.push_back(obj);
        }
        file.close();
        }
    };
    ~Lottery(){
        ofstream file("Shop.txt", ios::trunc);
        if(file.is_open()){
            for (auto item: arr){
                item->saveToFile(file);
            }file.close();
        }
    }

    void addProduct(Products::Product* obj){
        arr.push_back(obj);
    }

    void showLottery()const{
        for(auto item: arr){
            item->show();
        }
    }

    void TakeGift(){
        if(arr.size() == 0){
            cout << "Нету товаров\n";
        }else{
            int n = rand()%arr.size();
            arr[n]->show();
            cout << "Final Price: " << arr[n]->calcPrice() << endl;
            arr.erase(arr.begin()+n);
        }
    }
};
