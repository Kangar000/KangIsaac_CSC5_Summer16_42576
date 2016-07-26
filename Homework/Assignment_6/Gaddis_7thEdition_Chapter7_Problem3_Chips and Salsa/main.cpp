/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 4:27 PM
 * Purpose: Chips and Salsa
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int SALSAT = 5;
    const int JARSS = 5;
    string salsa[SALSAT] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars[JARSS];
    int totalSales, highestSales, lowestSales;
    string highestSP, lowestSP;
    
    for(int i=0; i < SALSAT; i++){
        cout << "Enter the number of jars sold for the salsa " << salsa[i] << ": " << endl;
        cin >> jars[i];
        while(jars[i] <0){
            cout << "Enter positive number of jars sold for the salsa " << salsa[i] << ": ";
            cin >> jars[i];
        }
    }
    
    totalSales = 0;
    highestSales = jars[0];
    highestSP = salsa[0];
    lowestSales = jars[0];
    lowestSP = salsa[0];
    for(int i=0; i<SALSAT; i++){
        totalSales += jars[i];
        if(highestSales < jars[i]){
            highestSales = jars[i];
            highestSP = salsa[i];
        }
        if(lowestSales > jars[i]){
            lowestSales = jars[i];
            lowestSP = salsa[i];
        }
    }
    cout << "Sales for each salsa type: " << endl;
    for(int i = 0; i < SALSAT; i++){
        cout << "The number of jars sold for the salsa type " << salsa[i] << " is " << jars[i] << endl;
    }
    cout << "The total number of jars sold in the past month: " << totalSales << endl;
    cout << "The highest number of jars sold for a type of salsa: " << highestSales << endl;
    cout << "The name of the highest selling product: " << highestSP << endl;
    cout << "The lowest number of jars sold for a type of salsa: " << lowestSales << endl;
    cout << "The name of the lowest selling product: " << lowestSP << endl;
    system("pause");
    
    return 0;
}

