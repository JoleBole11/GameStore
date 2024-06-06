#pragma once
#include <iostream>
#include <string>
using namespace std;
class Proizvod
{
protected:
	string ime, sifra, proizvodjac;
	float cena, stanje;
public:
	Proizvod(string im, string sif,string pro, int cen, int sta);
	void setIme(string im);
	void setSifra(string sif);
	void setProizvodjac(string pro);
	void setCena(int cen);
	void setStanje(int sta);
	string getIme();
	string getSifra();
	string setProizvodjac();
	float getCena();
	float getStanje();
	
	virtual void Kupovina();
	~Proizvod();
};

