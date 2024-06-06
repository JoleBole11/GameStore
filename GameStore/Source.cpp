#include "Proizvod.h"
#include "Igrica.h"
#include "Konzola.h"
#include "Korisnik.h"
#include "Menu.h"
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int Korisnik::brojKorisnika = 0;

int main()
{
	char postojeci = 'l';
	string novoIme, novoPrezime, novaAdresa;
	int novBroj;
	char izbor = 'b';

	vector<Igrica> igrice =
	{
		Igrica("CS2", "cs2", "Valve", 1000, 100, "PC", "FPS"),
		Igrica("Elden Ring", "eldenring", "FromSoftware", 5999, 200, "PS5, PC", "RPG"),
		Igrica("Mass Effect Legenday Edition", "masseffectle", "BioWare", 1999, 200, "PS5, PC, XboxOne", "RPG")
	};

	vector<Konzola> konzole =
	{
		Konzola("Playstation 5", "ps5", "Sony", 59999, 10, "AMD", 32, 1024),
		Konzola("Xbox One", "xo1", "Microsoft", 29999, 20, "AMD", 8, 256),
		Konzola("Xbox Series X", "xsx", "Microsoft", 54999, 5, "AMD", 16, 512)
	};

	vector<Korisnik> korisnici =
	{
	};

	while (postojeci != 'y' && postojeci != 'n')
	{
		cout << "Da li ste postojeci korisnik? (y/n)" << endl;
		cin >> postojeci;
		cout << "Los unos, probajte ponovo!" << endl;
		system("cls");
	}

	if (postojeci == 'n')
	{
		cout << "Unesite ime: ";
		cin >> novoIme;
		cout << "Unesite prezime: ";
		cin >> novoPrezime;
		cout << "Unesite adresu: ";
		cin >> novaAdresa;
		cout << "Unesite broj telefona: ";
		cin >> novBroj;

		Korisnik nov(novoIme, novoPrezime, novaAdresa, novBroj);

		korisnici.push_back(nov);

		system("cls");
	}
	
	do
	{
		if (tolower(izbor) == 'b')
		{
			GlavniMenu();
			cin >> izbor;
			switch (izbor)
			{
			case '1':
				PrintIgrice(igrice);
				cin >> izbor;
				break;
			case '2':
				PrintKonzole(konzole);
				cin >> izbor;
				break;
			case '3':
				korisnici[1].Info();
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