#include "Files.h"

vector<Igrica> ReadIgrice()
{
	vector<Igrica> igrice;
	Igrica tempIgrica("a", "a", "a", 1, 1, "a", "a");
	string tempIme, tempSifra, tempPlatforma, tempZanr, tempProizvodjac;
	int brojKorisnika = 0, unosId = 0, tempCena, tempStanje;

	ifstream igriceFile;
	igriceFile.open("igrice.txt");
	if (!igriceFile)
	{
		cerr << "Error in opening the file" << endl;
	}

	while (igriceFile >> tempIme >> tempSifra >> tempProizvodjac >> tempCena >> tempStanje >> tempPlatforma >> tempZanr)
	{
		tempIgrica.setIme(tempIme);
		tempIgrica.setSifra(tempSifra);
		tempIgrica.setProizvodjac(tempProizvodjac);
		tempIgrica.setCena(tempCena);
		tempIgrica.setStanje(tempStanje);
		tempIgrica.setPlatforma(tempPlatforma);
		tempIgrica.setZanr(tempZanr);
		igrice.push_back(tempIgrica);
	}

	return igrice;
}

void ReadKorisnici()
{
}
