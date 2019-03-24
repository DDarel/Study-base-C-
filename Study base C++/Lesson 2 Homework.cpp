#include "pch.h"
#include <iostream>
#include <cmath>

int main()
{
	//Объявляем коэфициенты в виде констант 
	const  int coeff2 = 2;
	const  int coeff4 = 4;
	//Вывод коэф. на экран 
	std::cout << "Coefficient #1:  " << coeff2 << "\n";
	std::cout << "Coefficient #2:  " << coeff4 << "\n";
	//Объявляем переменные 
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float x1 = 0;
	float x2 = 0;

	//Вводим переменные 
	std::cout << "Input a:";
	std::cin >> a;
	std::cout << "Input b:";
	std::cin >> b;
	std::cout << "Input c:";
	std::cin >> c;
	//Выводим переменные на экран 
	std::cout << "a:  " << a << "\n";
	std::cout << "b:  " << b << "\n";
	std::cout << "c:  " << c << "\n";
	//Расчитываем дискриминант 
	d = pow(b, 2) - (coeff4 * a *c);
	//Выводим ответ
	if (d > 0)
	{

		x1 = (-b + std::sqrt(d)) / (coeff2 * a);
		x2 = (-b - std::sqrt(d)) / (coeff2 * a);
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
	else
	{
		if (d < 0)
		{
			std::cout << "The equation has no solution " << std::endl;
		}
		else if (d == 0)
		{
			x1 = (-b) / (2 * a);
			std::cout << "x1 = x2 = " << x1 << std::endl;
		}
	}
}