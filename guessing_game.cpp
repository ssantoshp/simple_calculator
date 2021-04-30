#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int answer, secretNum,guessCount;
    guessCount = 1;
    srand(time(NULL));
    secretNum = rand() % 10 + 1;
    cout<<"Rules:"<<endl;
    cout<<"1. You have 3 trial"<<endl;
    cout<<"2. The number you have to guess is from 0 to 10"<<endl;
    cout<<"3. Have fun!"<<endl;
    guessCount = 0;
    while(answer!=secretNum){
            cout << "Guess my number ";
            cin >> answer;
            guessCount++;
            if(guessCount>2 && answer!=secretNum){
                cout<<"GAME OVER"<<endl;
                break;
            }
    if(answer==secretNum){
        cout<<"You found it!";
    }
    }
    return 0;
}
