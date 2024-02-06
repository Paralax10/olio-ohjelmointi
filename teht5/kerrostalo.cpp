#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon asunnot"<<endl;

    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double tulos = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    cout<<"Kerrostalon kulutus "<<tulos<<endl;
    return tulos;
}
Kerrostalo::~Kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;
}
