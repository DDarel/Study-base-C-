#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	const int SZ = 100;
	char ch[SZ] = "";
	cout << "Enter your string: ";
	cin >> ch;
	cout << endl;
	for (int i = 0; i < 100; i++)
	{
		ch[i] = toupper(ch[i]);
	}
	cout << ch << endl;

}