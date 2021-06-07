#include "Tetrahedron.h"

void Tetrahedron::set_sides(double a)
{
	if (a > 0)
	{
		this->a = a;
	}
	else throw std::invalid_argument("error, sides can only be greater than 0");
}

Tetrahedron::Tetrahedron(double a)
{
	set_sides(a);
}

double Tetrahedron::get_volume()
{
	return (1.0 / 12.0) * a * a * a * sqrt(2);
}

double Tetrahedron::get_surface_area()
{
	return sqrt(3) * a * a;
}

std::ostream& operator<<(std::ostream& out, const Tetrahedron& c)
{
	return out << c.a;
}
