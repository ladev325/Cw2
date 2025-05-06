#pragma once
#include "Class1.h"
namespace Oleksii {
	class Class3 : public Class1 {
	public:
		void showInfo() {
			using namespace std;
			cout << "Class3 from namespace Oleksii" << endl;
		}
	};
}