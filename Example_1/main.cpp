#include <iostream>
#include "Soft.h"
#include "Date.h"
using namespace std;

int main() {
	Commercial commercial("name", "producer", Date(1, 1, 2001), 10, 1000);
	commercial.showInfo();

	return 0;
}