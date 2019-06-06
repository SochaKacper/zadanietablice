#include <iostream>
#include <string.h>
using namespace std;
#define N 20
unsigned short dlugosc;
char napis[N + 1];
int i, n;
int main()
{
	cout << "Wypisz ilosc wyrazow: " << endl;
	cin >> n;
	for (int a = 0; a = n; a++)
	{
		cout << "Wpisz wyraz ktory chcesz uzyskac" << endl;
		cin >> napis;
		dlugosc = strlen(napis);
		for (i = dlugosc - 1; i >= 0; i--)

			cout << napis[i] << endl;

		cout << dlugosc << endl;
	}

	system("pause");
	return 0;

}