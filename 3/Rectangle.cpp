#include<iostream>
#include "Rectangle.h"
using namespace std;
void Rectangle::set_sides(double width, double height)
{
	if (width > 0 && height > 0) 
	{
		this->a = width;
		this->b = height;
	}
	else
	{
		throw invalid_argument{ "Стороны меньше нуля" };
	}
}
Rectangle::Rectangle(double width, double height)
{
	set_sides(width, height);
}
double Rectangle::get_area() { return get_composition(); }
double Rectangle::get_perimeter()
{
	return (get_b() * 2) + (get_a() * 2);
}