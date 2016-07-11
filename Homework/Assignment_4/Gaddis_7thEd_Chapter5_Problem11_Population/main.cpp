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

    int start, avg, noDays;
    cout << "Enter starting population of organism: " << endl;
    cin >> start;
    
    if(start < 2)
    {
        cout << "Invalid input: " << endl;
        cin >> start;
    }
    
    cout << "Enter average daily population: " << endl;
    cin >> avg;
    if(avg < 0)
    {
        cout << "Invalid input: " << endl;
        cin >> avg;
    }
    avg = (avg * start) / 100;
    cout << "Enter number of days: " << endl;
    cin >> noDays;
    
    for(int i=0; i<noDays; i++)
    {
        start += avg;
        cout << "Day " << i+1 << ":  " << start << endl;
    }
    
    
    return 0;
}

