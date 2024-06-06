#include "Proizvod.h"
#include <iostream>
#include <string>
using namespace std;

Proizvod::Proizvod(string im, string sif,string pro, int cen, int sta)
{
	ime = im;
	sifra = sif;
	cena = cen;
	stanje = sta;
	proizvodjac = pro;
}

void Proizvod::setIme(string im)
{
	ime = im;
}

void Proizvod::setSifra(string sif)
{
	sifra = sif;
}

void Proizvod::setProizvodjac(string pro)
{
	proizvodjac = pro;
}

void Proizvod::setCena(int cen)
{
	cena = cen;
}

void Proizvod::setStanje(int sta)
{
	stanje = sta;
}

string Proizvod::getIme()
{
	return ime;
}

string Proizvod::getSifra()
{
	return sifra;
}

string Proizvod::setProizvodjac()
{
	return proizvodjac;
}

float Proizvod::getCena()
{
	return cena;
}

float Proizvod::getStanje()
{
	return stanje;
}

void Proizvod::Kupovina()
{
}

Proizvod::~Proizvod()
{
}
