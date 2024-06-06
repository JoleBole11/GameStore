#include "Konzola.h"

Konzola::Konzola(string im, string sif, string pro, int cen, int sta, string proces, int ramm, int sto) : Proizvod(im, sif, pro, cen, sta)
{
	procesor = proces;
	ram = ramm;
	storage = sto;
}

void Konzola::setProcesor(string proces)
{
	procesor = proces;
}

void Konzola::setRam(int ramm)
{
	ram = ramm;
}

void Konzola::setStorage(int sto)
{
	storage = sto;
}

string Konzola::getProcesor()
{
	return procesor;
}

int Konzola::getRam()
{
	return ram;
}

int Konzola::getStorage()
{
	return storage;
}

void Konzola::Info()
{
	cout << "Ime: " << ime << endl << "Sifra: " << sifra << endl << "Proizvodjac: " << proizvodjac << endl << "Cena: " << cena << endl << "Stanje: " << stanje << endl << "Procesor: " << procesor << endl << "Ram: " << ram << "GB" << endl << "Storage: " << storage << "GB" << endl;
}