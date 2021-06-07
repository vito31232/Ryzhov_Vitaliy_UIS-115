#include "Triangle_area.h"

double get_area_1(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	double s = (p * (p - a) * (p - b) * (p - c)) * (1.0 / 2.0);
	return s;
}

double get_area_2(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return get_area_1(a, b, c);
	}
	else
	{
		throw 1;
	}
}

double get_area_3(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return get_area_1(a, b, c);
	}
	else
	{
		throw std::invalid_argument("error, sides have to be greater than 0");
	}
}

double get_area_4(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return get_area_1(a, b, c);
	}
	else
	{
		throw empty_class();
	}
}

double get_area_5(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return get_area_1(a, b, c);
	}
	else
	{
		throw independent_class("error, sides have to be greater than 0");
	}
}

double get_area_6(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return get_area_1(a, b, c);
	}
	else
	{
		throw successor_class("error, sides have to be greater than 0");
	}
}
