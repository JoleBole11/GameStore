#include "Menu.h"

void PrintKonzole(vector<Konzola> konzole)
{
	system("cls");
	int a = 1;
	cout << ">> Izaberite proizvod: " << endl << endl;

	for (vector<Konzola>::iterator i = konzole.begin(); i < konzole.end(); i++)
	{
		cout << a << ". ";
		(*i).Info();
		cout << endl;
		a++;
	}

	cout << endl << "Pritisnite 'B' da bi ste se vratili." << endl;
}

void GlavniMenu()
{
	system("cls");
	cout << "1. Igrice" << endl << "2. Konzole" << endl << "3. Korisnik" << endl;
	cout << endl << "Pritisnite 'Q' da bi izasli iz programa." << endl;
}

void PrintIgrice(vector<Igrica> igrice)
{
	system("cls");
	int a = 1;
	cout << ">> Izaberite proizvod: " << endl << endl;

	for (vector<Igrica>::iterator i = igrice.begin(); i < igrice.end(); i++)
	{
		cout << a << ". ";
		(*i).Info();
		cout << endl;
		a++;
	}

	cout << endl << "Pritisnite 'B' da bi ste se vratili." << endl;
}