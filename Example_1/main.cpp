#include "Equipment.h"
#include "Lottery.h"
#include <ctime>

using namespace std;

int main() {
    /* Products::Sport::Equipment obj1("Ball", 699.99, "China", 5, "Football", 1);
    obj1.show();
    ofstream file("Shop.txt");
    obj1.saveToFile(file);
    file.close(); */
    
    srand(time(0));
    Lottery itstep;
    itstep.addProduct(new Products::Sport::Equipment("Ball", 699.99, "China", 5, "Football", 1));
    itstep.addProduct(new Products::Sport::Clothing("Sneakers", 1999.99, "Adidas", 16, "Men", 39));
    itstep.addProduct(new Products::Fun::Game("Chess", 1002.0, "Classic", 8, 4));
    itstep.addProduct(new Products::Fun::Toy("Doll", 399.99, "Barbie", 2, 6));

    itstep.TakeGift();
}