#include "Cube.h"

void Cube::set_sides(double h)
{
	if (h > 0)
	{
		this->h = h;
	}
	else throw std::invalid_argument("error, sides can only be greater than 0");
}

Cube::Cube(double h)
{
	set_sides(h);
}

double Cube::get_volume()
{
	return h * h * h;
}

double Cube::get_surface_area()
{
	return h * h * U6;
}

std::ostream& operator<<(std::ostream& out, const Cube& c)
{
	return out << c.h;
}
