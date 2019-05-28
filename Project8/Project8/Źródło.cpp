#include<iostream>
#include<string>

using namespace std;
char wyraz[100];
void Switch(char wyraz[100])
{
	int liczba_a = 0;
	int liczba_b = 0;
	int liczba_c = 0;
	int dlugosc = strlen(wyraz);
	for (int i = 0; i < dlugosc; i++)
	{
		switch ((int)wyraz[i])
		{
		 case 1:
			 liczba_a++;
			break;
		 case 2:
			 liczba_b++;
			break;
		 case 3:
			 liczba_c++;
			break;
		default:
			cout << "Niema takich zanakow dostepnych w liscie znakow" << endl;
			break;
		}
		cout << "Jest" << liczba_a << " litery A" << endl;
		cout << "Jest" << liczba_b << " litery B" << endl;
		cout << "Jest" << liczba_c << " litery C" << endl;
	}
	
}

int main()
{
	cout << "Wprowadz wyraz ze stu znakow" << endl;
	cin >> wyraz;
	Switch(wyraz);
	
	system ("pause");
	return 0;
}