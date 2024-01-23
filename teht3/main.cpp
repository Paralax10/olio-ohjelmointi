#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    /*Chef kokki("Gordon Ramsay");
    ItalianChef kokki2("Valimaki");*/
    Chef kokki3("Jyrki");
    ItalianChef kokki4("Mario");

    /*kokki.makeSalad();
    kokki.makeSoup();
    kokki2.makePasta();*/
    kokki3.makeSalad();
    kokki3.makeSoup();
    kokki4.makePasta();
    return 0;
}
