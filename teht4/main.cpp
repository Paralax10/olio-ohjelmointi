#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Asunto asukas;
    Kerros asukas1;
    Katutaso asukas2;
    Kerrostalo asukas3;

    asukas.maarita(2, 100);
    asukas.laskeKulutus(1);

    asukas1.maaritaAsunnot();
    asukas1.laskeKulutus(1);

    asukas2.maaritaAsunnot();
    asukas2.laskeKulutus(1);

    asukas3.laskeKulutus(1);
    return 0;
}
