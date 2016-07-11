/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 2:57 PM
 * Purpose: Pennies For Pay
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int totDays;
    float pay, totPay = 0;
    do
    {
        cout << "Enter number of work days: " << endl;
        cin >> totDays;
        if(totDays < 0 || totDays > 31)
        {
            cout << "Invalid Input: Number must be greater than zero or less than or equal to 31" << endl;
        }
    }while(totDays < 0 || totDays > 31);
    
    cout << "______________" << endl;
    cout << "Day     Salary" << endl;
    cout << "______________" << endl;
    
    pay = 1;
    cout << fixed << setprecision(2) << showpoint << endl;
    for(int i = 1; i <= totDays; i++)
    {
        cout << i << "      $" << pay << endl;
        totPay += pay;
        pay += pay;
    }
    
    cout << "Total pay for " << totDays << " days is $" << totPay << endl;
    
    
    return 0;
}

