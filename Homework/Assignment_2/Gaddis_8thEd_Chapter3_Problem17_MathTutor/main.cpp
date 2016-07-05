/*
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 1, 2016, 6:33 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short random1, random2, result;
    unsigned short answer;
    
    //Input Data
    random1 = rand() % 900 + 100;
    random2 = rand() % 900 + 100;
    result = random1 + random2;
    
    //Display the problem
    cout << "Calculate the result of the following problem!" << endl;
    cout << "Line up and type the result" << endl;
    cout << "   " << random1 << endl;
    cout << " + " << random2 << endl;
    cout << "-------" << endl;
    cin >> answer;
    
    //Output and Process the Data
    if(result - answer == 0){
        cout << endl << "Your answer is correct!" << endl;
    }else{
        cout << endl << "Wrong the answer was " << result << endl;
    }
    
    //Exit Stage Right!
    return 0;
}