#include "Korisnik.h"

Korisnik::Korisnik(string im, string prez, string ad, string brT)
{
	ime = im;
	prezime = prez;
	adresa = ad;
	brojTelefona = brT;
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

void Korisnik::setBrojTelefona(string brT)
{
	brojTelefona = brT;
}

void Korisnik::setIdKorisnika(int id)
{
	idKorisnika = id;
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

string Korisnik::getBrojTelefona()
{
	return brojTelefona;
}

int Korisnik::getIdKorisnika()
{
	return idKorisnika;
}

void Korisnik::Info()
{
	cout << "Ime: " << ime << endl << "Prezime: " << prezime << endl << "Adresa: " << adresa << endl << "Broj Telefona: " << brojTelefona << endl << "ID: " << idKorisnika << endl;
}
