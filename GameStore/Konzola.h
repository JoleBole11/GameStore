#pragma once
#include "Proizvod.h"
class Konzola :
    public Proizvod
{
protected:
    string procesor;
    int ram, storage;
public:
    Konzola(string im, string sif, string proces, int cen, int sta, string pro, int ramm, int sto);
    void setProcesor(string proces);
    void setRam(int ramm);
    void setStorage(int sto);
    string getProcesor();
    int getRam();
    int getStorage();
    void Info();
    void Kupovina();
};

