/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22th, 1:21 PM
 * Purpose: RPS
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cstdlib>  //Random Seed
#include <ctime>    //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Here, NO DOUBLES
    char player,comp;
    int win=0,loss=0,tie=0;
    
    //Play until user wants to stop.
    do{
    //Input Data
        cout<<"RPS Game, what is your move R,P, or S?"<<endl;
        cin>>player;
        
    //Process Data
        do{
            comp=rand()%4+80;//P,Q,R,S
        }while(comp=='Q');
        
        cout<<"Player = "<<player<<" : Computer = "<<comp<<endl;
        
        switch(player){
            case'P':{
                if(comp=='P')cout<<"Ties so far = "<<++tie<<endl;
                else if(comp=='R')cout<<"Wins so far = "<<++win<<endl;
                else cout<<"Loss so far = "<<++loss<<endl;
                break;
            }
            case'R':{
                if(comp=='P')cout<<"Loss so far = "<<++loss<<endl;
                else if(comp=='R')cout<<"Ties so far = "<<++tie<<endl;
                else cout<<"Wins so far = "<<++win<<endl;
                break;
            }
            case'S':{
                if(comp=='P')cout<<"Wins so far = "<<++win<<endl;
                else if(comp=='R')cout<<"Loss so far = "<<++loss<<endl;
                else cout<<"Ties so far = "<<++tie<<endl;
                break;
            }
            default:  cout<<"You are Quitting with "<<player<<endl;
        }
    
    //Output Data
    }while(player=='P'||player=='R'||player=='S');
    
    cout<<"Total Wins = "<<win<<endl;
    cout<<"Total Ties = "<<tie<<endl;
    cout<<"Total Loss = "<<loss<<endl;
    
    //Exit Stage Right!
    return 0;
}
