#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	char builet[7];

	cout << "Введите число:";
	fgets(builet, sizeof(builet), stdin);

	cout << endl;
	cout << "Первое число:" << builet[0] << endl;
	cout << "Второе число:" << builet[1] << endl;
	cout << "Третье число:" << builet[2] << endl;
	cout << "Четвертое число:" << builet[3] << endl;
	cout << "Пятое число:" << builet[4] << endl;
	cout << "Шестое число:" << builet[5] << endl;
	cout << endl;


	if (builet[0] + builet[1] + builet[2] == builet[3] + builet[4] + builet[5])
	{
		cout << builet << " - суммы совпадают - билет счастливый" << endl;
	}
	else
	{
		cout << builet << "- суммы не совпадают - билет не счастливый" << endl;

	}
	return 0;
}