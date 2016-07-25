/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 1:24 PM
 * Purpose: Coin Toss
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

/*
 * 
 */

void coinToss(){
    int num;
    num = 1 + rand() % 2;
    if(num == 1){
        cout << "Heads" << endl;
    }else{
        cout << "Tails" << endl;
    }
}

int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));
    int number;
    cout << "Enter number of tosses: ";
    cin >> number;
    
    for(int i=0; i<number; i++){
        coinToss();
    }
    system("pause");
    
    
    return 0;
}

