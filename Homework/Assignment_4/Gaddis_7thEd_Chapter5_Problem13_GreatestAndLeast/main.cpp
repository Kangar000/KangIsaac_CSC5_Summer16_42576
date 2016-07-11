/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 2:57 PM
 * Purpose: The Greatest and Least of These
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num, large, small;
    cout << "Enter numbers in a series: " << endl;
    cin >> num;
    large = small = num;
    
    while(num != -99)
    {
        if(num > large)
        {
            large = num;
        }
        else if(num < small)
        {
            small = num;
            cin >> num;
        }
    }
    cout << "Largest number is:  " << large << endl;
    cout << "Smallest number is: " << small << endl;
    
    return 0;
}

