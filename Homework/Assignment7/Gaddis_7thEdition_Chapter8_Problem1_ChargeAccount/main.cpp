/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:00 PM
 * Purpose: Charge Account Validation
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

void linSearch(int array[], int num){
    int chargeN;
    bool found = false;
    cout << "Enter account charge number: " << endl;
    cin >> chargeN;
    for(int i=0; i < num; i++){
        if(array[i] == chargeN){
            found = true;
            break;
        }
    }
    if(found){
        cout << "Number is valid" << endl;
    }else{
        cout << "Number is invalid" << endl;
    }
}

int main(int argc, char** argv) {

    int num = 18;
    const int arrySize = 18;
    int array [arrySize] = {5658845,8080152,1005231,4520125,4562555,6545231,7895122,
    5552012,3852085,8777541,5050552,7576651,8451277,7828577,7881200,1302850,1250255,4581002};
    linSearch(array, num);
    system("pause");
    
    
    return 0;
}

