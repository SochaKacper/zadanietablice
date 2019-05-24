#include <iostream>
using namespace std:
int main()
{
	char tekst[255];
	int spacje;
	spacje = 0;
	cin >> tekst;
	for (i = 0; i < strlen(tekst); i++)
	{
		if (tekst[i] == ' ')
			spacje++;
	}
	cout << "W " << tekst << " mamy " << spacje;
	return 0;
}