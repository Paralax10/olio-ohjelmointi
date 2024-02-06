#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo* asukas;

    asukas = new Kerrostalo;
    asukas->laskeKulutus(1);
    delete asukas;

    return 0;
}
