#pragma once
#include <cmath>
class Vector
{
private:
	/**
	*\brief ��������� x1
	*/
	double x1; 
	/**
	*\brief ��������� x2
	*/
	double x2;
	/**
	*\brief ��������� y1
	*/
	double y1;
	/**
	*\brief ��������� y2
	*/
	double y2;
public:
	/**
*\brief ����������� �� ���������
*/
	Vector();
	/**
	*\brief ����������� � �����������
		* \param x1 ���������� x1
		* \param y1 ���������� y1
		* \param x2 ���������� x2
		* \param y2 ���������� y2
	*/
	explicit Vector(double x1, double y1, double x2, double y2);
	/**
	*\brief ���������� �� ���������
	*/
	~Vector() = default;
	/**
	*\brief ����������� ����������� �� ���������
	*/
	Vector(const  Vector&) = default;
	/**
	*\brief ����������� ���������� �� ���������
	*/
	Vector& operator=(const  Vector&) = default;
	/**
	*\brief ��������������� ���������� << 
	*/
	friend std::ostream& operator<<(std::ostream& out, Vector& P);
	/**
	*\brief ��������������� ���������� >>
	*/
	friend std::istream& operator>>(std::istream& in, Vector& P);
	/**
*\brief ��������������� ���������� +
*/
	Vector operator+(const Vector& other);
	/**
*\brief ��������������� ���������� -
*/
	Vector operator-(const Vector& other);
	/**
*\brief ��������������� ���������� *
*/
	double operator*(const Vector& other);
	/**
*\brief getter ��� �����
*/
	double get_length();
};