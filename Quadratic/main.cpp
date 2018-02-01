// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	double a{};
	double b{};
	double c{};

	std::cout << "Enter values a,b,c: " << std::endl;
	std::cin >> a >> b >> c;

	double quadfor0 = (((-b) + (sqrt((b*b) - (4 * a*c)))) / (2 * a));
	double quadfor1 = (((-b) - (sqrt((b*b) - (4 * a*c)))) / (2 * a));

	std::cout << "Value 1 = " << quadfor0 << std::endl;
	std::cout << "Value 2 = " << quadfor1 << std::endl;

    return 0;
}

