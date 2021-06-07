#pragma once
using namespace std;

class Pair 
{
protected:
	double a; 
	double b;
public:
	/**
	 \brief	Конструктор по умолчанию
	 */
	Pair(); 
	/**
	 \brief	Конструктор принимающий числа a и b
	 */
	explicit Pair(double a, double b);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Pair() = default;
	/**
	 \brief	Конструктор копирования
	 */
	Pair(const  Pair&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	Pair& operator=(const  Pair&) = default;
	/**
	 \brief	Возвращает a
	 \returns	a.
	 */
	double get_a();
	/**
	 \brief	Возвращает b
	 \returns	b.
	 */
	double get_b();
	/**
	 \brief	Возвращает произведение a и b
	 \returns	a * b.
	 */
	double get_composition();
	/**
	 \brief	Изменяет число a 
	 */
	void set_changing_a(double change_a);
	/**
	 \brief	Изменяет число b
	 */
	void set_changing_b(double change_b);
};

