#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Vector a(1, 2, 3, 4);
	Vector b;
	cin >> b;
	cout << a << "\n" << b << "\n";

	Vector c = a + b;
	cout << c << "\n";

	Vector d = a - b;
	cout << d << "\n";

	double y = a * b;
	cout << y << "\n";

	cout << a.get_length() << "\n";
	cout << b.get_length() << "\n";
}
