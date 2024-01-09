#include <iostream>

using namespace std;
int guesses;
int random;

int game(int maxnum){
    int guess = 0;
    random = rand() %maxnum;
    cout <<random<< endl;

    while(guess != random){
        cout << "Arvaa numero" << endl;
        cin>>guess;

        if(guess == random){
            cout <<"Oikein"<< endl;
            guesses ++;
        }
        else if(random <= guess){
            cout <<"Luku on suurempi"<< endl;
            guesses ++;
        }
        else if(random >= guess){
            cout <<"Luku on pienempi"<< endl;
            guesses ++;
        }
    }
    return guesses;
}

int main()
{
    srand(20);
    int maxinum = 40;
    game(maxinum);
    cout <<"Arvauksia: "<<guesses<< endl;
    return 0;
}
