#include "katutaso.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
    as1 = new Asunto;
    as2 = new Asunto;
}
void Katutaso::maaritaAsunnot(){
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double hinta){
    double tulos = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + this->Kerros::laskeKulutus(1);
    cout<<"Katutason ja perityn kerroksen tulos kun hinta="<<hinta<<" on "<<tulos<<endl;
    return 0;
}
Katutaso::~Katutaso()
{
    cout<<"Katutaso tuhottu"<<endl;
    delete as1;
    delete as2;
}
