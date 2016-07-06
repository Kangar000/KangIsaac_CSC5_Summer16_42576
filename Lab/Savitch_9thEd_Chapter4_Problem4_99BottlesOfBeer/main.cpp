/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 6, 2016, 12:26 PM
 * Purpose: 99 Bottles Of Beer
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
    
    
    //Input Data
    
    
    //Process the Data and output
    for(int bottles; bottles >= 1; bottles--){
        int nTens = (bottles - bottles % 10)/10; //Number of 10's
        int nOnes = bottles - nTens * 10;
        for(int times = 1; times <= 3; times++){
            switch(nTens){
                case 9: cout << "Ninety "; break;
                case 8: cout << "Eighty "; break;
                case 7: cout << "Seventy "; break;
                case 6: cout << "Sixty "; break;
                case 5: cout << "Fifty "; break;
                case 4: cout << "Forty "; break;
                case 3: cout << "Thirty "; break;
                case 2: cout << "Twenty "; break;
                case 1: {
                    switch(nOnes){
                        case 0: cout << "Ten "; break;
                        case 1: cout << "Eleven "; break;
                        case 2: cout << "Twelve" ; break;
                        case 3: cout << "Thirteen "; break;
                        case 4: cout << "Fourteen "; break;
                        case 5: cout << "Fifteen "; break;
                        case 6: cout << "Sixteen "; break;
                        case 7: cout << "Seventeen "; break;
                        case 8: cout << "Eighteen "; break;
                        case 9: cout << "Nineteen "; break;
                    }
                }
            }
            if(nTens != 1){
                switch(nOnes){
                    case 0: cout << "Zero "; break;
                    case 1: cout << "One "; break;
                    case 2: cout << "Two" ; break;
                    case 3: cout << "Three "; break;
                    case 4: cout << "Four "; break;
                    case 5: cout << "Five "; break;
                    case 6: cout << "Six "; break;
                    case 7: cout << "Seven "; break;
                    case 8: cout << "Eight "; break;
                    case 9: cout << "Nine "; break;
                }
            }
            if(times == 1 || times == 3){ 
                cout << " bottles of beer on the wall " << endl;
            }else if(times == 2){
                cout << "You take one down and pass it around" << endl;
            }else{
                cout << " bottles of beer on the wall " << endl;
            }
            cout << endl;
        }
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}