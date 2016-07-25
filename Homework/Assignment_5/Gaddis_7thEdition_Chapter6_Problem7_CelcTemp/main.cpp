/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 3:14 PM
 * Purpose: Celsius Temperature Table
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

float celsius(float F){
    float C;
    C = ((5.0/9.0)*(F-32));
    return C;
}

int main(int argc, char** argv) {

    float fahrenT = 0, celsT;
    cout << "Celsius Temperature Table" << endl;
    cout << "-------------------------" << endl;
    cout << "Fahrenheit     Celsius" << endl;
    cout << "-------------------------" << endl;
    
    for(int i=0; i<=20; i++){
        celsT = celsius(fahrenT);
        cout << fahrenT++ << "               " << celsT << endl;
    }
    system("pause");
    
    return 0;
}

