#include <iostream>
#include "Triangle_area.h"
using namespace std;

int main()
{
	std::cout << get_area_1(1, 3, 3) << std::endl;

	try
	{
		std::cout << get_area_2(-1.2, -3.6, 4) << std::endl;
		std::cout << get_area_3(-1.2, -3.6, 4) << std::endl;
		std::cout << get_area_4(-1.2, -3.6, 4) << std::endl;
		std::cout << get_area_5(-1.2, -3.6, 4) << std::endl;
		std::cout << get_area_6(-1.2, -3.6, 4) << std::endl;
	}
	catch (int)
	{
		std::cerr << "specifier twrow";
	}
	catch (invalid_argument error)
	{
		std::cerr << error.what() << std::endl;
	}
	catch (empty_class)
	{
		std::cerr << "Empty class" << std::endl;
	}
	catch (independent_class error)
	{
		std::cerr << error.message << std::endl;
	}
	catch (successor_class error)
	{
		std::cerr << error.what() << std::endl;
	}
}