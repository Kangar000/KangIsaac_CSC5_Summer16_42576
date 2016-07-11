/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 3:55 PM
 * Purpose: Budget Analysis
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float budget, expense, tot = 0;
    cout << "Enter budget: " << endl;
    cin >> budget;
    cout << "Enter all expenses: " << endl;
    cin >> expense;
    
    do
    {
        tot += expense;
    }while(expense != 0);
    if(tot <= budget)
    {
        cout << "Expenses are under budget" << endl;
    }
    else
    {
        cout << "Expenses are over budget" << endl;
    }
    
    

    return 0;
}

