/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on June 23, 2016, 8:31 PM
 * Purpose:  Big C
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
    char c;//Character to utilize in creating a Big C output
    
    //Input Data
    cout << "Choose the letter to use in forming a Big C output" << endl;
    cin >> c;
    
    //Process the Data
    
    //Output the processed Data
    cout <<"     " << c << " " << c << " " << c << endl;
    cout <<"   " << c << "      " << c << endl;
    cout <<"  " << c << endl;
    cout <<" " << c << endl;
    cout <<" " << c << endl;
    cout <<" " << c << endl;
    cout <<"  " << c << endl;
    cout <<"   " << c << "      " << c << endl;
    cout <<"     " << c << " " << c << " " << c << endl;
    
    //Exit Stage Right!
    return 0;
}