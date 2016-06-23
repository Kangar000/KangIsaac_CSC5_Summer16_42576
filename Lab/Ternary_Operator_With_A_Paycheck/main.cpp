/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on June 23, 2016, 1:37 PM
 * Purpose: Paycheck calculation with Ternary Operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd = 20; //Hours worked
    float payRate = 10; //$'s/hr
    float payChck; //Paycheck in $'s
    char ovrTime = 40; //Overtime starts at 50 hours
    
    //Input Data
    
    
    //Process the Data
    payChck = hrsWrkd < ovrTime?
              hrsWrkd * payRate: //True
              hrsWrkd * ovrTime + (hrsWrkd - ovrTime) * payRate * 1.5; //False
    
    //Output the processed Data
    cout << "Hours worked = " << hrsWrkd << "(hrs)" << endl;
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Overtime starts at " << static_cast<int>(ovrTime) << "(hrs)" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << "Paycheck = $" << payChck << endl;
    
    
    //Exit Stage Right!
    return 0;
}
