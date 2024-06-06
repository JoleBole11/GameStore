#pragma once
#include "Proizvod.h"
class Igrica :
    public Proizvod
{
protected:
    string platforma, zanr;
public:
    Igrica(string im, string sif,string pro, int cen, int sta, string plat, string zan);
    void setPlatforma(string plat);
    void setZanr(string zan);
    string getPlatforma();
    string getZanr();
    void Kupovina();
    void Info();
};