#include<iostream>

class rectangle
{
private:
	int x2, y2;
	int x4, y4;
	int x1, y1;
	int x3, y3;
	int AB, BC, CD, AD;
public:
	rectangle(int a, int b, int c, int d); // конструктор 
	void coor(); // подсчет координат 
	void print(); // вывод 
	void coordinate();
	void side();
	void square();
};
