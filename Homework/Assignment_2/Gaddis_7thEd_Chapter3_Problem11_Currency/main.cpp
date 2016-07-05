/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 2:36 PM
 * Purpose: Currency
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float dollars, yen, euros;
    
    //Input Data
    cout << "Enter U.S. Dollars to convert to Yen and Euros: " << endl;
    cin >> dollars;
    
    //Process the Data
    yen = dollars / 113.22;
    euros = dollars / 0.6936;
    
    //Output the processed Data
    cout << "Amount in Yens is: " << fixed << setprecision(2) << showpoint << yen << endl;
    cout << "Amount in Euros is: " << fixed << setprecision(2) << showpoint << euros << endl;
    
    //Exit Stage Right!
    return 0;
}