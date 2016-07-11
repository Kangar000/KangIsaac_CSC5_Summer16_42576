/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 3:50 PM
 * Purpose: Celsius to Fahrenheit Table
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float farhen;
    cout << "----------------------" << endl;
    cout << "Celsius     Fahrenheit" << endl;
    cout << "----------------------" << endl;
    
    for(int celc = 0; celc <= 20; celc++)
    {
        farhen = (9/5)*celc + 32;
        cout << celc << "             " << farhen << endl;
    }
    
    
    
    return 0;
}

