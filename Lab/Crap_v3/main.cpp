/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 7, 2016, 12:55 PM
 * Purpose: Version 2 - Craps
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int nGames, nWins = 0, nLose = 0;
    string fName;
    const int SIZE = 20;
    char lName[SIZE];
    ofstream out;
    
    //Open file and Input Data
    out.open("Stats.dat");
    do{
        cout << "The Game of Craps" << endl;
        cout << "How many games to Play has to be positive?" << endl;
        cin >> nGames;
    }while(nGames<=0);
    cout << "What is your first name" << endl;
    cin >> fName;
    cout << "What is your last name" << endl;
    cin >> lName;
    //Process the Data
    for(int game = 1; game <= nGames; game++){
        //Throw a pair of dice;
        char die1 = rand() % 6+1;
        char die2 = rand() % 6+1;
        char sum = die1 + die2;
        //Determine Win or Lose
        switch(sum){
            case 7:
            case 11:nWins++;break;
            case 2:
            case 3:
            case 12:nLose++;break;
            default:{
                //When to roll again
                bool rollAgn=true;
                while(rollAgn){
                    //Throw another set of dice
                    die1 = rand() % 6+1;
                    die2 = rand() % 6+1;
                    char sumAgn = die1 + die2;
                    if(sum==sumAgn){
                        nWins++;
                        rollAgn=false;
                    }else if(sumAgn==7){
                        nLose++;
                        rollAgn=false;
                    }else rollAgn=true;
                }
            }
        }
    }
    
    
    //Output the processed Data
    cout << endl << fName << " " << lName << " game stats" << endl;
    cout << "Number of Games = " << nGames << endl;
    cout << "Number of Wins = " << nWins << endl;
    cout << "Number of Losses = " << nLose << endl;
    if(nWins >= nLose){
        cout << "You are doing better than statistics" << endl;
        cout << "determines is possible!!!" << endl;
    }
    
    //Exit Stage Right!
    out.close();
    return 0;
}