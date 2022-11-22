/*
**** Made By - Akshay sharma
* ** Email - 8859akshaysharma@gmmail.com

*/


#include <iostream>
#include <windows.h>
using namespace std;

void timer(int h, int m, int s);

int main()
{
	int hrs = 0, min = 0, sec = 0;
	cout << "Enter hours :";
	cin >> hrs;
	cout << "Enter minutes : ";
	cin >> min;
	cout << "Enter seconds : ";
	cin >> sec;
	timer(hrs, min, sec);
	return 0;
}


void timer(int h, int m, int s)
{
	int t = 1, i, j, k;
	Sleep(100);
	system("cls");
	for (i = h; i >= 0; i--)
	{
		for (j = m; j >= 0; j--)
		{
			for (k = s; k >= 0; k--)
			{
				if (k == 0 && j > 0)
				{
					j--;
					k = 60;
				}
				cout << "\n\n\n\n\t\t\t";
				cout << i << " : " << j << " : " << k;
				Sleep(1000);
				system("cls");
				if (j == 0 && i > 0)
				{
					i--;
					j = 60;
				}
			}

		}
	}
	i = 0;
	j = 0;
	k = 0;
	while (t)
	{
		cout << "\n\n\n\n\t\t\t";
		cout << i << " : " << j << " : " << k;
		Sleep(250);
		system("cls");
		Sleep(250);
		t++;
		if (t > 5)
			t = 0;
	}
	system("cls");
	cout << "thanks for using";

}