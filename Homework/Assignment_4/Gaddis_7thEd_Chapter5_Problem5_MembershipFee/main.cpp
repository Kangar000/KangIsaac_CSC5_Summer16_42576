/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 2:57 PM
 * Purpose: Membership Fee Increase
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float charges = 2500;
    cout << "Projected membership rate for six years" << endl;
    cout << "Year    Charges" << endl;
    
    for(int i = 1; i <= 6; i++)
    {
        cout << i << "       " << charges << endl;
        charges += charges * 0.04;
    }
    
    
    return 0;
}

