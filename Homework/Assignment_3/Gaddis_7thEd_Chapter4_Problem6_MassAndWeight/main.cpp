/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 3:04 PM
 * Purpose: Mass and Weight
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
    float mass, weight;
    
    //Input Data
    cout << "Enter an object mass: " << endl;
    cin >> mass;
    
    //Process the Data
    weight = (mass * 9.8);
    
    //Output the processed Data
    cout << "The object weight is " << weight << " newtons" << endl;
    if(weight > 1000){
        cout << "It is too heavy" << endl;
    }else if(weight < 10){
        cout << "It is too light" << endl;
    }else{
        cout << "Invalid input" << endl;
    }
    
    //Exit Stage Right!
    return 0;
}