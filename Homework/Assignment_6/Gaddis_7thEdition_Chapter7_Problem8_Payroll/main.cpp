/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 3:41 PM
 * Purpose: Payroll
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    long int empID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    float payRate[7];
    float wages[7];
    
    for(int i=0; i<7; i++){
        cout << "Enter the number of hours worked for the employee " << empID[i] << ": ";
        cin >> hours[i];
        while(hours[i] < 0){
            cout << "Enter the number of hours worked >= 0: ";
            cin >> hours[i];
        }
        cout << "Enter the hourly pay rate for the employee " << empID[i] << ": ";
        cin >> payRate[i];
        while(payRate[i] < 6){
            cout << "Enter the hourly pay rate >= 6: ";
            cin >> payRate[i];
        }
        wages[i] = hours[i]*payRate[i];
    }
    cout << endl << endl;
    cout << left << setw(15) << "Employee ID" << right << setw(15) << "Gross Wages" << endl;
    cout << "------------------------------" << endl;
    for(int i=0; i<7; i++){
        cout << left << setw(15) << empID[i] << right << setw(15) << setprecision(2) << fixed << wages[i] << endl;
    }
    cout << "------------------------------" << endl;
    
    return 0;
}

