#pragma once
#include "Class1.h"
using namespace std;

class OutsideClass : public Oleksii::Class1 {
public:
	void showInfo() {
		cout << "OutsideClass\n";
	}
};