#include <iostream>

int main()
{
	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			std::cout << i << "*" << j << "=" << i * j << " ";
		}
		std::cout << std::endl;
	}
}