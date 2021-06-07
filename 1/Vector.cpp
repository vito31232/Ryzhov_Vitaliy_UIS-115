#include <iostream>
#include "Vector.h"

std::ostream& operator<<(std::ostream& out, Vector& P)
{
	out << "(" << P.x1 << "; " << P.y1 << ")  ";
	out << "(" << P.x2 << "; " << P.y2 << ")";
	return out;
}
std::istream& operator>>(std::istream& in, Vector& P)
{
	in >> P.x1 >> P.y1 ;
	in >> P.x2 >> P.y2 ;
	return in;
}

Vector::Vector()
{
	this->x1 = 0;
	this->y1 = 0;
	this->x2 = 0;
	this->y2 = 0;
}

Vector::Vector(double x1, double y1, double x2, double y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

Vector Vector::operator+(const Vector& other)
{
	Vector temp;
	temp.x1 = this->x1 + other.x1;
	temp.y1 = this->y1 + other.y1;
	temp.x2 = this->x2 + other.x2;
	temp.y2 = this->y2 + other.y2;
	return temp;
}

Vector Vector::operator-(const Vector& other)
{
	Vector temp;
	temp.x1 = this->x1 - other.x1;
	temp.y1 = this->y1 - other.y1;
	temp.x2 = this->x2 - other.x2;
	temp.y2 = this->y2 - other.y2;
	return temp;
}

double Vector::operator*(const Vector& other)
{
	double x3 = this->x2 - this->x1;
	double y3 = this->y2 - this->y1;
	double x4 = other.x2 - other.x1;
	double y4 = other.y2 - other.y1;
	return x3 * x4 + y3 * x4;
}

double Vector::get_length()
{
	double x3 = this->x2 - this->x1;
	double y3 = this->y2 - this->y1;
	return sqrt(x3 * x3 + y3 * y3);
}