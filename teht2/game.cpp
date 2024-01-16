#include "game.h"
#include<iostream>
using namespace std;

Game::Game(int)
{
    srand(time(0));
    maxNumber = 10;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
    randomNumber = rand() %maxNumber;
}
Game::~Game(){
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
void Game::play(){
    //cout<<randomNumber<<endl;
    while(playerGuess != randomNumber){
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        if(playerGuess < randomNumber){
            cout<<"Your guess is too small"<<endl;
        }
        else if(playerGuess > randomNumber){
            cout<<"Your guess is too big"<<endl;
        }
        else if(playerGuess == randomNumber){
            numOfGuesses++;
            printGameResult();
        }
        numOfGuesses++;
    }
}
void Game::printGameResult(){
    cout<<"You guessed the right anwser = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}
