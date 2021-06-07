#include<iostream>
#include"Cube.h"
#include"Cylinder.h"
#include "Tetrahedron.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	Cube cube(10);
	Cylinder cylinder(10, 5);
	Tetrahedron tetrahedron(15);

	cout << "Площадь поверхности куба = " << cube.get_surface_area() << endl;
	cout << "Объём куба = " << cube.get_volume() << endl;

	cout << "Площадь поверхности цилиндра = " << cylinder.get_surface_area() << endl;
	cout << "Объём цилиндра = " << cylinder.get_volume() << endl;

	cout << "Площадь поверхности тетраэдера = " << tetrahedron.get_surface_area() << endl;
	cout << "Объём тетраэдера = " << tetrahedron.get_volume() << endl;
}