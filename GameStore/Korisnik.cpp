#include "Korisnik.h"

Korisnik::Korisnik(string im, string prez, string ad, int brT)
{
	brojKorisnika += 1;
	ime = im;
	prezime = prez;
	adresa = ad;
	brojTelefona = brT;
	idKorisnika = brojKorisnika;
}

void Korisnik::setIme(string im)
{
	ime = im;
}

void Korisnik::setPrezime(string prez)
{
	prezime = prez;
}

void Korisnik::setAdresa(string ad)
{
	adresa = ad;
}

void Korisnik::setBrojTelefona(int brT)
{
	brojTelefona = brT;
}

string Korisnik::getIme()
{
	return ime;
}

string Korisnik::getPrezime()
{
	return prezime;
}

string Korisnik::getAdresa()
{
	return adresa;
}

int Korisnik::getBrojTelefona()
{
	return brojTelefona;
}

int Korisnik::getIdKorisnika()
{
	return idKorisnika;
}

void Korisnik::Info()
{
	system("cls");
	cout << "Ime: " << ime << endl << "Prezime: " << prezime << endl << "Adresa: " << adresa << endl << "Broj Telefona: " << brojTelefona << endl << "ID: " << idKorisnika << endl;
}
