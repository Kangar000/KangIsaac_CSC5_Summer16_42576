/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 2:50 PM
 * Purpose: Minimum and Maximum
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
    float num1, num2;
    
    //Input Data
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    
    
    //Process the Data
    
    
    //Output the processed Data
    if(num1 > num2){
        cout << "The first number is larger than the second number" << endl;
    }else{
        cout << "The second number is larger than the first number" << endl;
    }
    
    
    //Exit Stage Right!
    return 0;
}