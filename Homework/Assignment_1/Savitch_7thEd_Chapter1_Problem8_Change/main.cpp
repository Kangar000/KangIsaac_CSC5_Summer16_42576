/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on June 23, 2016, 6:55 PM
 * Purpose:  Change
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
    float qrters;
    float dimes;
    float nickels;
    float worth;
    
    //Input Data
    cout << "Please enter the number of quarters: " << endl;
    cin >> qrters;
    cout << "Please enter the number of dimes: " << endl;
    cin >> dimes;
    cout << "Please enter the number of nickels: " << endl;
    cin >> nickels;
    //Process the Data
    worth = (qrters * 25) + (dimes * 10) + (nickels * 5);
    
    //Output the processed Data
    cout << "The number of quarters entered = " << qrters << endl;
    cout << "The number of dimes entered = " << dimes << endl;
    cout << "The number of nickels entered = " << nickels << endl;
    cout << "The total worth of the coin(s) = " << worth << endl;
    //Exit Stage Right!
    return 0;
}