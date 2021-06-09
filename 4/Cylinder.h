#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "Geometric_figure.h"
#include <stdexcept>
#include <ostream>
class Cylinder :
    public Geometric_figure
{
private:
    /**
    *\brief радиус
    */
    double radius;
    /**
    *\brief высота
    */
    double h;
    /**
    *\brief сеттер дл¤ проверки отрицательности
    * \param высота
    * \param радиус
    */
    void set_cylinder(double h, double radius);
	
	const double U2 = 2;
public:

    /**
    *\brief конструктор с параметрами
    * \param высота
    * \param радиус
    */
    Cylinder(double h, double radius);

    /**
    *\brief деструктор по умолчанию
    */
    ~Cylinder() override = default;


    /**
    *\brief метод, вычисл¤ющий объЄм конуса
    */
    double get_volume() override;

    /**
    *\brief метод, вычисл¤ющий площадь поверхности
    */
    double get_surface_area() override;

    /**
    *\brief переопределение оператора <<
    */
    friend std::ostream& operator<< (std::ostream& out, const Cylinder& c);

};

