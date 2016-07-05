/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 3:22 PM
 * Purpose: BMI
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
    float weight, height, bmi;
    
    //Input Data
    cout << "Enter the person's weight in pounds: " << endl;
    cin >> weight;
    cout << "Enter the person's heigh in inches: " << endl;
    cin >> height;
    
    //Process the Data
    bmi = (weight * 703)/(height * height);
    
    //Output the processed Data
    cout << "The person's Body Mass Index is: " << bmi << endl;
    if(bmi >= 18.5 && bmi <= 25){
        cout << "The person is optimal weight" << endl;
    }else if(bmi < 18.5){
        cout << "The person is underweight" << endl;
    }else{
        cout << "The person is overweight" << endl;
    }
    
    //Exit Stage Right!
    return 0;
}