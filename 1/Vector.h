#pragma once
#include <cmath>
class Vector
{
private:
	/**
	*\brief кордината x1
	*/
	double x1; 
	/**
	*\brief кордината x2
	*/
	double x2;
	/**
	*\brief кордината y1
	*/
	double y1;
	/**
	*\brief кордината y2
	*/
	double y2;
public:
	/**
*\brief  онструктор по умолчанию
*/
	Vector();
	/**
	*\brief  онструктор с параметрами
		* \param x1 координата x1
		* \param y1 координата y1
		* \param x2 координата x2
		* \param y2 координата y2
	*/
	explicit Vector(double x1, double y1, double x2, double y2);
	/**
	*\brief ƒеструктор по умолчанию
	*/
	~Vector() = default;
	/**
	*\brief  онструктор копировани¤ по умолчанию
	*/
	Vector(const  Vector&) = default;
	/**
	*\brief  онструктор присвоени¤ по умолчанию
	*/
	Vector& operator=(const  Vector&) = default;
	/**
	*\brief ѕереопределение опрератора << 
	*/
	friend std::ostream& operator<<(std::ostream& out, Vector& P);
	/**
	*\brief ѕереопределение опрератора >>
	*/
	friend std::istream& operator>>(std::istream& in, Vector& P);
	/**
*\brief ѕереопределение опрератора +
*/
	Vector operator+(const Vector& other);
	/**
*\brief ѕереопределение опрератора -
*/
	Vector operator-(const Vector& other);
	/**
*\brief ѕереопределение опрератора *
*/
	double operator*(const Vector& other);
	/**
*\brief getter дл¤ длины
*/
	double get_length();
};