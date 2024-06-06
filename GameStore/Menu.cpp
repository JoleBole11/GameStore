#include "Menu.h"
#include <Windows.h>

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

vector<Igrica> PrintIgricu(vector<Igrica> igrice, char izbor)
{
	int kupljena = 0;
	system("cls");
	int izborBroj = int(izbor) - '0' - 1;
	while (izborBroj <= 0 && izborBroj > igrice.size())
	{
		cout << "Pogresan unos, probajte ponovo." << endl;
		cin >> izbor;
		int izborBroj = int(izbor) - '0' - 1;
	}
	while (tolower(izbor) != 'b')
	{
		system("cls");
		igrice[izborBroj].Info();
		cout << endl << "1. Kupite igricu" << endl;
		cout << endl << "Pritisnite 'B' da bi ste se vratili." << endl;
		cin >> izbor;
		if (izbor == '1')
		{
			kupljena = 1;
			izbor = 'b';
		}
	}
	if (kupljena == 1)
	{
		igrice[izborBroj].Kupovina();
	}
	Sleep(2000);
	return igrice;
}

vector<Konzola> PrintKonzolu(vector<Konzola> konzole, char izbor)
{
	int kupljena = 0;
	system("cls");
	int izborBroj = int(izbor) - '0' - 1;
	while (izborBroj <= 0 && izborBroj > konzole.size())
	{
		cout << "Pogresan unos, probajte ponovo." << endl;
		cin >> izbor;
		int izborBroj = int(izbor) - '0' - 1;
	}
	while (tolower(izbor) != 'b')
	{
		system("cls");
		konzole[izborBroj].Info();
		cout << endl << "1. Kupite konzolu" << endl;
		cout << endl << "Pritisnite 'B' da bi ste se vratili." << endl;
		cin >> izbor;
		if (izbor == '1')
		{
			kupljena = 1;
			izbor = 'b';
		}
	}
	if (kupljena == 1)
		konzole[izborBroj].Kupovina();
	Sleep(2000);
	return konzole;
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