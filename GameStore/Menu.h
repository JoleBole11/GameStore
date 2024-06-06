#pragma once
#include <iostream>
#include <vector>
#include "Igrica.h"
#include "Konzola.h"
using namespace std;

void GlavniMenu();
void PrintIgrice(vector<Igrica> igrice);
void PrintKonzole(vector<Konzola> konzole);
vector<Igrica> PrintIgricu(vector<Igrica> igrice, char izbor);
vector<Konzola> PrintKonzolu(vector<Konzola> konzole, char izbor);