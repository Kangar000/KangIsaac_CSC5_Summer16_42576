/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:20 PM
 * Purpose: Rainfall Statistics
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */

const int nMonths = 12;

void sortHL(int values[], string pMonths[]){
    bool swap;
    int temp;
    
    do{
        swap = false;
        for(int count = 0; count < nMonths; count++){
            if(values[count] < values[count+1]){
                temp = values[count];
                values[count] = values[count+1];
                values[count+1] = temp;
                
                string tString = pMonths[count];
                pMonths[count] = pMonths[count+1];
                pMonths[count+1] = tString;
                swap = true;
            }
        }
    }while(swap);
}

int main(int argc, char** argv) {

    int values[nMonths];
    string pMonths[nMonths] = {"January","February","March","April","May","June","July",
    "August","September","October","November","December"};
    
    for(int month = 0; month < nMonths; month++){
        do{
            cout << "Enter the total rainfall for " << pMonths[month] << ":" << endl;
            cin >> values[month];
            if(values[month] < 0)
                cout << "Enter positive rain fall statistics" << endl;
        }while(values[month] < 0);
    }
    cout << "Before sorting " << endl;
    
    for(int month = 0; month < nMonths; month++){
        cout << setw(10) << pMonths[month] << setw(10) << values[month] << endl;
    }
    sortHL(values,pMonths);
    cout << "After sorted in order of rainfall " << endl;
    cout << "From Highest to Lowest" << endl;
    for(int month = 0; month < nMonths; month++){
        cout << setw(10) << pMonths[month] << setw(10) << values[month] << endl;
    }
    system("pause");
    return 0;
}

