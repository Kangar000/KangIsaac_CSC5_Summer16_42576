/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 25, 2016, 1:31 PM
 * Purpose: Markup
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

float calcRet(float cost, float perc){
    float retail;
    retail = cost + ((cost*perc)/100);
    return retail;
}

int main(int argc, char** argv) {
    
    float wcost, retail, mPerc;
    cout << "Enter whole sale cost: " << endl;
    cin >> wcost;
    cout << "Enter marked percentage: " << endl;
    cin >> mPerc;
    
    retail = calcRet(wcost,mPerc);
    cout << "Retail cost of item is: " << retail << endl;
    
    return 0;
}

