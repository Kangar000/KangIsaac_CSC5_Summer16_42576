/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 6, 2016, 1:40 PM
 * Purpose: Random Approximation or Stochastic Calculus
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI = 4 *atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float apprxPI, nDarts, nCirc = 0;
    float maxRnd = pow(2,31)-1;
    
    //Input Data
    cout << "How many darts to throw to approximate PI" << endl;
    cin >> nDarts;
    
    //Process the Data
    for(int dart = 1; dart <= nDarts; dart++){
        float x = rand()/ maxRnd;
        float y = rand()/ maxRnd;
        if(x*x+y*y<1)nCirc++;
    }
    apprxPI = 4.0f * nCirc/nDarts;
    //Output the processed Data
    cout << PI << " approximated by " << nDarts << " darts = " << apprxPI << endl;
    
    //Exit Stage Right!
    return 0;
}