#include "Igrica.h"

Igrica::Igrica(string im, string sif,string pro, int cen, int sta, string plat, string zan) : Proizvod(im, sif, pro, cen, sta)
{
	platforma = plat;
	zanr = zan;
}

void Igrica::setPlatforma(string plat)
{
	platforma = plat;
}

void Igrica::setZanr(string zan)
{
	zanr = zan;
}

string Igrica::getPlatforma()
{
	return platforma;
}

string Igrica::getZanr()
{
	return zanr;
}

void Igrica::Kupovina()
{
	stanje--;
	cout << "Kupili ste igricu!" << endl << "Molimo sacekajte 2 sekunde.";
}

void Igrica::Info()
{
	cout << "Ime: " << ime << endl << "Sifra: " << sifra << endl << "Proizvodjac: " << proizvodjac << endl << "Cena: " << cena << endl << "Stanje: " << stanje << endl << "Platforma: " << platforma << endl << "Zanr: " << zanr << endl;
}
