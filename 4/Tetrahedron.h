#pragma once
#include "Geometric_figure.h"
#include <ostream>
#include <stdexcept>
#include <cmath>
class Tetrahedron :
    public Geometric_figure
{
private:
    /**
    *\brief
    */
    double a;
    /**
    *\brief сеттер дл¤ проверки отрицательности
    * \param сторона
    */
    void set_sides(double a);
public:
    /**
    *\brief конструктор с параметрами
    * \param сторона
    */
    Tetrahedron(double a);

    /**
    *\brief деструктор по умолчанию
    */
    ~Tetrahedron() override = default;


    /**
    *\brief метод, вычисл¤ющий объЄм конуса
    * \param высота
    * \param радиус
    */
    double get_volume() override;

    /**
    *\brief метод, вычисл¤ющий площадь поверхности
    * \param высота
    * \param радиус
    */
    double get_surface_area() override;

    /**
    *\brief переопределение оператора <<
    */
    friend std::ostream& operator<< (std::ostream & out, const Tetrahedron& c);

};

