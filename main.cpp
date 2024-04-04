#include <iostream>
#include "rectangle.h"
int main()
{
	setlocale(LC_ALL, "RU");
	rectangle first({2, 10}, {8, 2},point {2,10});
	first.print();
	first.coordinate();
	first.side();
	first.square();
	first.function1();
	first.function2();
	first.function3();
}
