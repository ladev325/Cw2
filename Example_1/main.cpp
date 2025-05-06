#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "OutsideClass.h"
using namespace std;

int main() {
	Oleksii::Class1 obj1;
	Oleksii::Class2 obj2;
	Oleksii::Class3 obj3;
	OutsideClass obj4;
	obj3.showInfo();
	obj4.showInfo();


	return 0;
}