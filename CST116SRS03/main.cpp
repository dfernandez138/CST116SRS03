// CST116SRS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	std::cout.setf(std::ios::left); 

	int i0{};
	int i1{};
	double d0{};
	double d1{};

	std::cout << "Enter Four Values" << std::endl;
	std::cin >> i0 >> i1 >> d0 >> d1;
	
	int imasii = i0 + i1;
	int imasd = i0 + d0;
	int dmasdd = d0 + d1;
	int imenosii = i0 - i1;
	int imenosd = i0 - d0;
	int dmenosdd = d0 - d1;
	int istarii = i0 * i1;
	int istard = i0 * d0;
	int dstardd = d0 * d1;
	int idivii = i0 / i1;
	int idivd = i0 / d0;
	int ddivdd= d0 / d1;
	int iwutii = i0 % i1;
	int iiwuti = i1 % i0;


	std::cout << "i0 + i1 == "<< imasii<<std::endl;
	std::cout << "i0 + d0 == "<< imasd << std::endl;
	std::cout << "d0 + d1 == "<< dmasdd << std::endl;
	std::cout << "i0 - i1 == "<< imenosii << std::endl;
	std::cout << "i0 - d0 == "<< imenosd <<std::endl;
	std::cout << "d0 - d1 == "<< dmenosdd << std::endl;
	std::cout << "i0 * i1 == "<< istarii << std::endl;
	std::cout << "i0 * d0 == "<< istard << std::endl;
	std::cout << "d0 * d1 == "<< dstardd << std::endl;
	std::cout << "i0 / i1 == "<< idivii << std::endl;
	std::cout << "i0 / d0 == "<< idivd << std::endl;
	std::cout << "d0 / d1 == "<< ddivdd << std::endl;
	std::cout << "i0 % i1 == "<< iwutii << std::endl;
	std::cout << "i1 % i0 == "<< iiwuti << std::endl;


	return 0;
}

