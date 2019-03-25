#include "pch.h"
#include <iostream>

using namespace std;



int main()
{

	setlocale(0, "");
	cout << "Введите последовательность (-1 для завершения)\n";

	int sum = 0;
	int count = -1;
	int N = 0;
	float average;

	while (N != -1)
	{
		sum += N;
		cin >> N;
		count++;
	}

	average = float(sum) / float(count);


	cout << "\nСумма  - " << sum << endl;
	cout << "\nСреднее арифметическое - " << average << endl;
	return 0;

}