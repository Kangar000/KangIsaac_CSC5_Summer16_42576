/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:08 PM
 * Purpose: Lottery Winners
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */


bool searchW(int winNum[], int size, int playerN){
    bool found = false;
    size = 10;
    int index = 0;
    while(index < size & !found){
        if(winNum[index] == playerN)
            found = true;
        index++;
    }
    return found;
}

int main(int argc, char** argv) {

    int winNum[10] = {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int playerN;
    cout << "Player enter your name: " << endl;
    cin >> playerN;
    
    bool result = searchW(winNum, 10, playerN);
    if(result)
        cout << "one of the winning number is yours" << endl;
    else
        cout << "Your number is not in the winning list" << endl;
    system("pause");
            
    
    
    return 0;
}

