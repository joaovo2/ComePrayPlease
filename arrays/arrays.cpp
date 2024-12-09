#include <iostream>
#include <array>

int main()
{
	std::array<std::string, 5> names{"Joao", "Vitor", "Oliveira", "Soares", "Pereira"};

	for(std::string name : names)
	{
		std::cout << name << " ";
	}
}