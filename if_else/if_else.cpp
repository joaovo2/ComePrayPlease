// if_else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double x;
	std::cout << "Digite um numero: ";
	std::cin >> x;

	if (x < 0)
	{
		std::cout << "O numero digitado e menor que 0" << std::endl;
	}
	else if (x > 0)
	{
		std::cout << "O numero digitado e maior que 0" << std::endl;
	}
	else
	{
		std::cout << "O numero digitado e igual a 0" << std::endl;
	}

}
