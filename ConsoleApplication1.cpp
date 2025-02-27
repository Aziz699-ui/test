#include <iostream>

int main() 
{
	setlocale(LC_ALL, "Rus");

	int x = 5;
	int y = 5;
	
	std::cout << "Сумма чисел: " << x + y;
	std::cout << "\nПроизведение чисел: " << x * y;
	std::cout << "\nДеление чисел: " << x / y;
	
}