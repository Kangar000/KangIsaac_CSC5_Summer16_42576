/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:15 PM
 * Purpose: Lottery Winners Modification
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
bool searchW(int winNum[], int size, int playerN){
    int first = 0, last = size - 1, middle;
    bool found = false;
    while(!found && first <= last){
        middle = (first+last)/2;
        if(winNum[middle] == playerN)
            found = true;
        else if(winNum[middle] > playerN)
            last = middle - 1;
        else
            first = middle + 1;
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
        cout << "One of the winning number is yours" << endl;
    else
        cout << "Your number is not in the winning list" << endl;
    system("pause");
            
    
    
    return 0;
}