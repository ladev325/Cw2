#include <iostream>
#include <iostream>
#include "Toy.h"
#include "Product.h"
using namespace std;

int main() {
	Products::Fun::Toy obj1("Plane", 200, "Manufacturer", 7, 5);
	cout << obj1.calcPrice() << endl;
	ofstream file("somefile.txt");
	obj1.saveToFile(file);
	return 0;
}