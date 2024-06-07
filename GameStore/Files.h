#pragma once
#include "Igrica.h"
#include "Korisnik.h"
#include "Konzola.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<Igrica> ReadIgrice();
vector<Korisnik> ReadKorisnici();
vector<Konzola> ReadKonzole();
vector<Korisnik> NewKorisnik(vector<Korisnik> korisnici);