#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int h, d = 2;
	cout << "\n Enter length of tree: ";
	cin >> h;
	cout << endl;
	for (int a = 0; a <= h; a++)
	{
		for (int i = 1; i <= d; i++)
		{
			for (int j = 0; j < h - a; j++)
				cout << " ";
			for (int j = 1; j < d * 2; j++)
			{
				if (i <= d * 2 && i >= d - j + 1 && j <= i + d - 1)
					cout << "*";
				else
					cout << " ";
			}
			         for (int j = 0; j < h - a; j++)
				     cout << " ";
			         cout << endl;
		}
		d++;
	}
}