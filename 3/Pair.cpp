#include"Pair.h"
using namespace std;
Pair::Pair() 
{
	a = 0.0;
	b = 0.0;
}
Pair::Pair(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
void Pair::set_changing_a(double change_a)
{
	a = change_a;
}
void Pair::set_changing_b(double change_b)
{
	b = change_b;
}
double Pair::get_a() { return a; }
double Pair::get_b() { return b; }
double Pair::get_composition() { return a * b; }
