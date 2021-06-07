#include<iostream>
#include"Pair.h"
#include "Rectangle.h"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	Pair counts(1.0, 2.0);
	cout << counts.get_composition() << endl;
	Rectangle rect(5.0, 10.0);
	cout << rect.get_a()<<endl;
	cout << rect.get_b() << endl;
	cout << rect.get_perimeter() << endl;
	cout << rect.get_area() << endl;
	return 0;
}
