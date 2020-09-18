//
//  main.cpp
//  Learn_04函数
//
//  Created by yue.wang on 2020/8/22.
//  Copyright © 2020 yue.wang. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int rollDice();

int main(int argc, const char * argv[]) {
    enum Status{CONTINUE,WON,LOST};
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint =0;
    Status gameStatus = CONTINUE;
    unsigned int sumofDice = rollDice();
    
    switch (sumofDice) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint =sumofDice;
            cout<<"Point is"<<myPoint<<endl;
            break;
    }
    
    while(gameStatus == CONTINUE){
        sumofDice = rollDice();
        if(sumofDice == myPoint)
            gameStatus = WON;
        else
            if(sumofDice == 7)
                gameStatus = LOST;
    }
    if(gameStatus == WON)
        cout<<"Player wins"<<endl;
    else
        cout<<"Player losed"<<endl;
}

unsigned int rollDice(){
    unsigned int die1 = 1+rand()%6;
    unsigned int die2 = 1+rand()%6;
    
    unsigned int sum = die1+die2;
    cout<<"Player rolled"<<die1<<"+"<<die2<<" = "<<sum<<endl;
    return sum;
}
