#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int SZ = 100;
	char ch[SZ] = "";
	cout << "Enter your string: ";
	cin >> ch;
	for (short i = 0; (i < SZ) && (ch[i] != '\0'); i++)
	{
		if ((ch[i] >= '0') && (ch[i] <= '9'))
		{
			cout << ch[i] << " is digit" << endl;
		}
	}

}

