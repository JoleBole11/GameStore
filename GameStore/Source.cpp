#include "Proizvod.h"
#include "Igrica.h"
#include "Konzola.h"
#include "Korisnik.h"
#include "Menu.h"
#include "Files.h"
#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()
{
	int brojKorisnika = 0, unosId = 0;
	char postojeci = 'l';
	char izbor = 'b', poslednjiIzbor = 'b';

	vector<Igrica> igrice = ReadIgrice();

	vector<Konzola> konzole = ReadKonzole();

	vector<Korisnik> korisnici = ReadKorisnici();

	while (postojeci != 'y' && postojeci != 'n')
	{
		cout << "Da li ste postojeci korisnik? (y/n)" << endl;
		cin >> postojeci;
		cout << "Los unos, probajte ponovo!" << endl;
		system("cls");
	}

	if (postojeci == 'n')
	{
		korisnici = NewKorisnik(korisnici);
	}

label:
	cout << "Unesite vas ID: ";
	cin >> unosId;

	system("cls");
	korisnici[unosId - 1].Info();
	cout << "Da li ste ovo vi? (y/n)";
	cin >> izbor;
	
	while (izbor != 'y' && izbor != 'n')
	{
		cout << "Pogresan unos, probajte ponovo." << endl;
		cin >> izbor;
	}

	if (izbor == 'y')
	{
		cout << "heheheha";
	}
	else
	{
		system("cls");
		goto label;
	}

	izbor = 'b';
	
	do
	{
		if (tolower(izbor) == 'b')
		{
			GlavniMenu();
			if (poslednjiIzbor == '1' || poslednjiIzbor == '2' || poslednjiIzbor == '3')
			{
				izbor = poslednjiIzbor;
			}
			else
			{
				cin >> izbor;
				poslednjiIzbor = 'b';
			}
			switch (izbor)
			{
			case '1':
				PrintIgrice(igrice);
				cin >> izbor;
				if (izbor != 'b')
				{
					igrice = PrintIgricu(igrice, izbor);
					poslednjiIzbor = '1';
					izbor = 'b';
				}
				else
					poslednjiIzbor = 'b';
				break;
			case '2':
				PrintKonzole(konzole);
				cin >> izbor;
				if (izbor != 'b')
				{
					konzole = PrintKonzolu(konzole, izbor);
					poslednjiIzbor = '2';
					izbor = 'b';
				}
				else
					poslednjiIzbor = 'b';
				break;
			case '3':
				korisnici[unosId - 1].Info();
				cin >> izbor;
				break;
			}
		}	
		else
		{
			cout << "Los unos, probajte ponovo." << endl;
			cin >> izbor;
		}
	} while (tolower(izbor) != 'q');
}