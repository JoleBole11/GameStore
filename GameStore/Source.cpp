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
	int brojKorisnika = 0, unosId = 0, tempCena, tempStanje;
	char postojeci = 'l';
	string tempIme, tempPrezime, tempAdresa, tempBroj, tempSifra, tempPlatforma, tempZanr, tempProizvodjac;
	char izbor = 'b', poslednjiIzbor = 'b';

	vector<Igrica> igrice = ReadIgrice();

	vector<Konzola> konzole =
	{
		Konzola("Playstation 5", "ps5", "Sony", 59999, 10, "AMD", 32, 1024),
		Konzola("Xbox One", "xo1", "Microsoft", 29999, 20, "AMD", 8, 256),
		Konzola("Xbox Series X", "xsx", "Microsoft", 54999, 5, "AMD", 16, 512)
	};

	vector<Korisnik> korisnici =
	{
	};

	Korisnik tempKorisnik("a", "a", "a", "a");

	ifstream korisniciFile;
	korisniciFile.open("korisnici.txt");
	if (!korisniciFile) 
	{
		cerr << "Error in opening the file" << endl;
		return 1;
	}

	while (korisniciFile >> tempIme >> tempPrezime >> tempAdresa >> tempBroj) 
	{
		brojKorisnika++;
		tempKorisnik.setIme(tempIme);
		tempKorisnik.setPrezime(tempPrezime);
		tempKorisnik.setAdresa(tempAdresa);
		tempKorisnik.setBrojTelefona(tempBroj);
		tempKorisnik.setIdKorisnika(brojKorisnika);
		korisnici.push_back(tempKorisnik);
	}

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
		cin >> tempIme;
		cout << "Unesite prezime: ";
		cin >> tempPrezime;
		cout << "Unesite adresu: ";
		cin >> tempAdresa;
		cout << "Unesite broj telefona: ";
		cin >> tempBroj;

		Korisnik nov(tempIme, tempPrezime, tempAdresa, tempBroj);

		korisnici.push_back(nov);

		system("cls");
	}
	else if (postojeci == 'y')
	{
		label:
		cout << "Unesite vas ID: ";
		cin >> unosId;
	}

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
				korisnici[unosId].Info();
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