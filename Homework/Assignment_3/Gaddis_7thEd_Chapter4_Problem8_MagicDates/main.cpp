/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 3:10 PM
 * Purpose: Magic Dates
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float month, day, year, I;
    
    //Input Data
    cout << "Enter a month: " << endl;
    cin >> month;
    cout << "Enter a date: " << endl;
    cin >> day;
    cout << "Enter a year with last two digits: " << endl;
    cin >> year;
    
    //Process the Data
    I = month * day;
    
    //Output the processed Data
    if(I == year){
        cout << "The date is magic" << endl;
    }else{
        cout << "The date is not magic" << endl;
    }
    
    
    //Exit Stage Right!
    return 0;
}