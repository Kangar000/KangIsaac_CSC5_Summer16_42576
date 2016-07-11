/* 
 * File:   main.cpp
 * Author: Isaac
 * Created on July 11, 2016, 2:53 PM
 * Purpose: Sum of Numbers
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num, sum = 0;
    cout << "Enter a positive integer value:" << endl;
    cin >> num;
    for(int i=1; i<=num; i++)
    {
        sum+=i;
    }
    cout << "Sum of all the integers from 1 up to " << num << " is: " << sum << endl;
    
    
    return 0;
}

