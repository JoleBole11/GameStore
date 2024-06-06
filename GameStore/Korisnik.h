#pragma once
#include <iostream>
using namespace std;

class Korisnik
{
protected:
	string ime, prezime, adresa, brojTelefona;
	int idKorisnika;
public:
	Korisnik(string im, string prez, string ad, string brT);
	void setIme(string im);
	void setPrezime(string prez);
	void setAdresa(string ad);
	void setBrojTelefona(string brT);
	void setIdKorisnika(int id);
	string getIme();
	string getPrezime();
	string getAdresa();
	string getBrojTelefona();
	int getIdKorisnika();
	void Info();
};