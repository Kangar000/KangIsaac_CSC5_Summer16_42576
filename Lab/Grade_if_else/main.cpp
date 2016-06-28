/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on June 28, 2016, 12:56 PM
 * Purpose: Grade if else
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
    unsigned int score; //Input [0,100]
    char grade; //[A,B,C,D,F]
    
    //Input Data
    cout << "Input the score [0,100] output will be the grade" << endl;
    cin >> score;
    
    //Process the Data
    if(score >= 90) grade = 'A';
    else if(score >= 80) grade = 'B';
    else if(score >= 70) grade = 'C';
    else if(score >= 60) grade = 'D';
    else grade = 'F';
    
    
    //Output the processed Data
    cout << score << " equates to a " << grade << " grade!" << endl;
    
    //Exit Stage Right!
    return 0;
}