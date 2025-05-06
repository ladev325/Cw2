#pragma once
#include "Class1.h"
namespace Oleksii {
	class Class2 : public Class1 {
	public:
		void showInfo() {
			using namespace std;
			cout << "Class2 from namespace Oleksii" << endl;
		}
	};
}