#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
}

void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan 4 kpl kerros asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
    //cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
double Kerros::laskeKulutus(double hinta){
    double tulo = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    cout<<"Kerrosten tulos kun hinta="<<hinta<<" on "<<tulo<<endl;
    return tulo;
}

Kerros::~Kerros()
{
    cout<<"Kerros tuhottu"<<endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}
