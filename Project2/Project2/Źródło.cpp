#include <iostream>
#define ROZMIAR_TABLICY 100
using namespace std;
char tab[ROZMIAR_TABLICY];

void Pierwsza_i_ostatnia()
{
	cout << "podaj s�owo kt�re ma max 100 znak�w " << endl;
	cin >> tab;
	cout << "pierwszy wyraz to " << tab[0];
	cout << "ostatni wyraz to " << tab[strlen(tab) - 1];
}

int main()
{
	Pierwsza_i_ostatnia();
	return 0;
}