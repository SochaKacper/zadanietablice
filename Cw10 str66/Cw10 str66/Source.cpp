#include <iostream>
#include <string>
using namespace std;
int i;
int main()
{
	string tekst;
	int spacje;
	spacje = 0;
	cout << "Napisz zdanie: " << endl;
	getline(cin, tekst);
	for (i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] == ' ')
			spacje++;
	}
	cout << "W tekscie jest " << spacje << " spacjie lub spacji ";
	system("pause");
	return 0;
}