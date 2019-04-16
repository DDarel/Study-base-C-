#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	char rev[] = "";
	cout << "Enter your string: ";
	cin >> rev;

		int j = 0;
		int i = strlen(rev)-1;
		int temp;
		while (i > ((strlen(rev) - 1)) / 2)
		{
			temp = rev[j];
			rev[j] = rev[i];
			rev[i] = temp;
			j++;
			i--;
		}
		cout << rev << endl;
}