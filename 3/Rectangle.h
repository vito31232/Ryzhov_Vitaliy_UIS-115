#pragma once
#include "Pair.h"
using namespace std;
class Rectangle : public Pair
{
private:
	/**
	 \brief	Сеттер принимающий длины сторон и проверяющий их на отрицательность
	 */
	void set_sides(double a, double b);
public:
	/**
	 \brief	Конструктор принимающий числа длину и ширину
	 */
	explicit Rectangle(double width, double height);
	/**
	\brief	Деструктор по умолчанию
	*/
	~Rectangle() = default;
	/**
	 \brief	Конструктор копирования
	 */
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	Rectangle& operator=(const  Rectangle&) = default;
	/**
	 \brief	Возвращает площадь
	 \returns	get_composition().
	 */
	double get_area();
	/**
	 \brief	Возвращает периметр
	 \returns	(get_b() * 2) + (get_a() * 2).
	 */
	double get_perimeter();
};