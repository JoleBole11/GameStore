#pragma once
#include <iostream>
using namespace std;

class Korisnik
{
protected:
	static int brojKorisnika;
	string ime, prezime, adresa;
	int brojTelefona, idKorisnika;
public:
	Korisnik(string im, string prez, string ad, int brT);
	void setIme(string im);
	void setPrezime(string prez);
	void setAdresa(string ad);
	void setBrojTelefona(int brT);
	string getIme();
	string getPrezime();
	string getAdresa();
	int getBrojTelefona();
	int getIdKorisnika();
	void Info();
};