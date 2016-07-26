/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 3:41 PM
 * Purpose: 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int size = 10;
    int small, large;
    int numArry[size];
    cout << "Enter Values of array: " << endl;
    
    for(int i=0; i<size; i++){
        cin >> numArry[i];
    }
    
    small = numArry[0];
    large = numArry[0];
    
    for(int j=0; j<size; j++){
        if(numArry[j] > large){
            large = numArry[j];
        }else{
            small = numArry[j];
        }
    }
    
    cout << "The smallest value is: " << small << endl;
    cout << "The largest value is: " << large << endl;
    
    return 0;
}

