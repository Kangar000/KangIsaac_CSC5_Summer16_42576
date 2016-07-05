/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 2:20 PM
 * Purpose: Word Game
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
    string name, city, college, prof, animal, pname;
    float age;
    
    //Input Data
    cout << "Please enter your name" << endl;
    cin >> name;
    cout << "Please enter your age" << endl;
    cin >> age;
    cout << "Please enter the name of a city" << endl;
    cin >> city;
    cout << "Please enter the name of a college" << endl;
    cin >> college;
    cout << "Please enter a profession" << endl;
    cin >> prof;
    cout << "Please enter a type of animal" << endl;
    cin >> animal;
    cout << "Please enter a pet's name" << endl;
    cin >> pname;
    
    //Process the Data
    
    
    //Output the processed Data
    cout << "There once was a person named " << name << " who lived in " << city << "." << endl;
    cout << "At the age of " << age << ", " << name << " went to college at " << college << "." << endl;
    cout << name << " graduated and went to work as a " << prof << "." << endl;
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << pname << "." << endl;
    cout << "They both lived happily ever after!" << endl;
    
    //Exit Stage Right!
    return 0;
}