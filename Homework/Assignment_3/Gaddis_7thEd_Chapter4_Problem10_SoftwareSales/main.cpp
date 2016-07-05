/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 3:28 PM
 * Purpose: Software Sales
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
    float cost, quant, totCost;
    
    //Input Data
    cout << "Enter quantity: ";
    cin >> quant;
    
    //Process the Data
    if(quant <= 0){
        cout << "Invalid input" << endl;
        cout << "Enter quantity: " << endl;
        cin >> quant;
    }
    cost = 99;
    if(quant < 10){
        totCost = cost;
    }
    else if(quant <= 19){
        totCost = cost - ((cost * 20)/100);
    }
    else if(quant <= 49){
        totCost = cost - ((cost * 30)/100);
    }
    else if(quant <= 99)
        totCost = cost - ((cost * 40)/100);
    else
        totCost = cost - ((cost * 50)/100);
    
    //Output the processed Data
    cout << "Total cost purchase: $" << quant * totCost << endl;
    
    
    //Exit Stage Right!
    return 0;
}