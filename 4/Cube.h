#pragma once
#include "Geometric_figure.h"
#include <stdexcept>
#include <ostream>
class Cube :
    public Geometric_figure
{
private:
    /**
    *\brief сторона
    */
    double h;
    /**
    *\brief сеттер дл¤ проверки отрицательности
    * \param сторона
    */
    void set_sides(double h);
public:
    /**
    *\brief метод, вычисл¤ющий площадь поверхности
    * \param сторона
    */
    Cube(double h);

    /**
    *\brief деструктор по умолчанию
    */
    ~Cube() override = default;

    /**
    *\brief метод, вычисл¤ющий объЄм куба
    */
    double get_volume() override;

    /**
    *\brief метод, вычисл¤ющий площадь поверхности куба
    */
    double get_surface_area() override;

    /**
    *\brief переопределение оператора <<
    */
    friend std::ostream& operator<< (std::ostream& out, const Cube& c);

};

