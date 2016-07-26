/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 3:41 PM
 * Purpose: Vector Modification
 */

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

/*
 * 
 */

bool testPin(vector<int> custPin, vector<int> dataPin, int size){
    for(int index = 0; index <size; index++)
    {
        if(custPin[index] != dataPin[index]){
            return false;
        }
        return true;
    }
}


int main(int argc, char** argv) {

    const int numDig = 7;
    vector<int> pin1(numDig);
    vector<int> pin2(numDig);
    vector<int> pin3(numDig);
    
    pin1.push_back(2);
    pin1.push_back(4);
    pin1.push_back(1);
    pin1.push_back(8);
    pin1.push_back(7);
    pin1.push_back(9);
    pin1.push_back(0);
    
    pin2.push_back(2);
    pin2.push_back(4);
    pin2.push_back(6);
    pin2.push_back(8);
    pin2.push_back(7);
    pin2.push_back(9);
    pin2.push_back(0);
    
    for(int i=0; i<7; i++){
        pin3.push_back(i+1);
        if(testPin(pin1, pin2, numDig)){
            cout << "Error: pin1 and pin2 report to be the same." << endl;
        }else{
            cout << "Success: pin1 and pin2 are different." << endl;
        }
        if(testPin(pin1, pin3, numDig)){
            cout << "Error: pin1 and pin3 report to be the same." << endl;
        }else{
            cout << "Success: pin1 and pin3 are different." << endl;
        }
        if(testPin(pin1, pin1, numDig)){
            cout << "Sucess: pin1 and pin1 report to be the same" << endl;
        }else{
            cout << "Error: pin1 and pin2 report to be different." << endl;
        }
    }
    
    return 0;
}


