#include "Cylinder.h"

void Cylinder::set_cylinder(double h, double radius)
{
    if (h > 0 && radius > 0)
    {
        this->h = h;
        this->radius = radius;
    }
    else throw std::invalid_argument("error, sides can only be greater than 0");
}

Cylinder::Cylinder(double h, double radius)
{
    set_cylinder(h, radius);
}

double Cylinder::get_volume()
{
    return M_PI * radius * radius * h;
}

double Cylinder::get_surface_area()
{
    return (2 * M_PI * radius * radius) + (M_PI * radius * h);
}


std::ostream& operator<<(std::ostream& out, const Cylinder& c)
{
    out << c.h << " " << c.radius;
    return out;
}

