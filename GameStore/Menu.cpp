#include "Menu.h"

void PrintKonzole(vector<Konzola> konzole)
{
	system("cls");

	for (vector<Konzola>::iterator i = konzole.begin(); i < konzole.end(); i++)
	{
		(*i).Info();
	}

	cout << endl << "Pritisnite 9 da bi se vratili." << endl;
}

void GlavniMenu()
{
	system("cls");
	cout << "1. Igrice" << endl << "2. Konzole" << endl << "3. Korisnik" << endl;
}

void PrintIgrice(vector<Igrica> igrice)
{
	system("cls");

	for (vector<Igrica>::iterator i = igrice.begin(); i < igrice.end(); i++)
	{
		(*i).Info();
		cout << endl;
	}

	cout << endl << "Pritisnite 9 da bi se vratili." << endl;
}