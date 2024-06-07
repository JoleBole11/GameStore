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

vector<Korisnik> ReadKorisnici()
{
	string tempIme, tempPrezime, tempAdresa, tempBroj;
	int brojKorisnika = 0;

	Korisnik tempKorisnik("a", "a", "a", "a");

	vector<Korisnik> korisnici;

	ifstream korisniciFile;
	korisniciFile.open("korisnici.txt");
	if (!korisniciFile)
	{
		cerr << "Error in opening the file" << endl;
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

	return korisnici;
}

vector<Konzola> ReadKonzole()
{
	vector<Konzola> konzole;
	Konzola tempKonzola("a", "a", "a", 1, 1, "a", 1, 1);
	string tempIme, tempSifra, tempProcesor, tempProizvodjac;
	int unosId = 0, tempCena, tempStanje, tempRam, tempStorage;

	ifstream igriceFile;
	igriceFile.open("igrice.txt");
	if (!igriceFile)
	{
		cerr << "Error in opening the file" << endl;
	}

	while (igriceFile >> tempIme >> tempSifra >> tempProizvodjac >> tempCena >> tempStanje >> tempProcesor >> tempRam >> tempStorage)
	{
		tempKonzola.setIme(tempIme);
		tempKonzola.setSifra(tempSifra);
		tempKonzola.setProizvodjac(tempProizvodjac);
		tempKonzola.setCena(tempCena);
		tempKonzola.setStanje(tempStanje);
		tempKonzola.setProcesor(tempProcesor);
		tempKonzola.setRam(tempRam);
		tempKonzola.setStorage(tempStorage);
		konzole.push_back(tempKonzola);
	}

	return konzole;
}

vector<Korisnik> NewKorisnik(vector<Korisnik> korisnici)
{
	string tempIme, tempPrezime, tempAdresa, tempBroj;

	ofstream writeKorisnik;

	cout << "Unesite ime: ";
	cin >> tempIme;
	cout << "Unesite prezime: ";
	cin >> tempPrezime;
	cout << "Unesite adresu: ";
	cin >> tempAdresa;
	cout << "Unesite broj telefona: ";
	cin >> tempBroj;

	Korisnik tempKorisnik(tempIme, tempPrezime, tempAdresa, tempBroj);

	int tempId = korisnici.back().getIdKorisnika() + 1;

	tempKorisnik.setIdKorisnika(tempId);

	korisnici.push_back(tempKorisnik);

	writeKorisnik.open("korisnici.txt", ios_base::app);
	if (!writeKorisnik) {
		cerr << "Error in opening the output file" << endl;
	}

	writeKorisnik << endl << tempIme << ' ' << tempPrezime << ' ' << tempAdresa << ' ' << tempBroj;

	system("cls");

	return korisnici;
}
