#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}
void Asunto::maarita(int luku1, int luku2){
    asukasMaara = luku1;
    neliot = luku2;
    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
double Asunto::laskeKulutus(double hinta){
    double tulos = (neliot * asukasMaara)*hinta;
    cout<<"Asunnon kulutus, kun hinta="<<hinta<<" on "<<tulos<<endl;
    return tulos;
}
