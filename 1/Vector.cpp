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
	return Vector(this->x1 + other.x1, this->y1 + other.y1, this->x2 + other.x2, this->y2 + other.y2)
}

Vector Vector::operator-(const Vector& other)
{
	return Vector(this->x1 - other.x1, this->y1 - other.y1, this->x2 - other.x2, this->y2 - other.y2)
}

double Vector::operator*(const Vector& other)
{
	return (this->x2 - this->x1) * (this->y2 - this->y1) + (other.x2 - other.x1) * (other.y2 - other.y1);
}

double Vector::get_length()
{
	return sqrt((this->x2 - this->x1) * (this->x2 - this->x1) + (this->y2 - this->y1) * (this->y2 - this->y1));
}