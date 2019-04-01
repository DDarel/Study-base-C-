#include "pch.h"
#include <iostream>
#include <cstdio>
#include <bitset>
using namespace std;


unsigned bit_count(unsigned bits)
{
	unsigned counter = 0;
	for (; bits != 0; ++counter)
		bits &= bits - 1;
	return counter;
}

int main()
{

	setlocale(0, "");

	int dec = 0, bin = 0, dec1, j;
	cout << "Введите число:" << endl;
	cout << "==> ";
	cin >> dec;
	cout << dec;

	dec1 = dec;

	for (j = 0; dec > 0; j++)
	{
		bin += (dec % 2)*pow(10.0, j);
		dec /= 2;
	}


	cout << "--->";
	cout << bin;
	cout << "> установленых битов ";



	cout << bit_count(dec1);
	cout << endl;
	cout << endl;

	cout << "Использование функции  bitset:" << endl;
	cout << "-------------------------------" << endl;
	cout << dec1;
	cout << "--->";
	cout << bitset<32>(dec1);
	cout << "> установленых битов ";
	cout << bit_count(dec1);
	cout << endl;
	cout << endl;

	system("pause");
	return 0;

}