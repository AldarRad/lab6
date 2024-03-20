#include <iostream>
#include "rectangle.h"
int main()
{
	setlocale(LC_ALL, "RU");
	rectangle first(2, 10, 8, 2);
	first.coor();
	first.print();
	first.coordinate();
	first.side();
	first.square();
}
