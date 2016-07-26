/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:32 PM
 * Purpose: String Selection Sort
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */

void selectS(string names[], int size){
    int startS;
    int minIndex;
    string minValue;
    
    for(startS = 0; startS < (size - 1); startS++){
        minValue = startS;
        minValue = names[startS];
        for(int index = startS+1; index < size; index++){
            if(names[index].compare(minValue)<0){
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startS];
        names[startS] = minValue;
    }
}

int main(int argc, char** argv) {

    const int numName = 20;
    string names[numName] = {"Collins, Bill","Smith, Bart","Allen,Jim","Griffin,Jim",
    "Stamey,Marty","Rose,Geri","Taylor,Terri","Jhonson,Jill","Allison,Jeff","Looney,Joe",
    "Wolfe,Bill","James,Jean","Weaver,Jim","Poer,Bob","Rutherford,Greg","Javeens,Renee",
    "Harrison,Rose","Setzer,Cathy","Pike,Gordon","Holland,Beth"};
    
    cout <<"Given string elements are: " << endl;
    for(int index = 0; index < numName; index++){
        cout << setw(15) << names[index] << endl;
    }
    selectS(names,numName);
    cout << "After selection sort applied: " << endl;
    for(int index = 0; index < numName; index++){
        cout << setw(15) << names[index] << endl;
    }
    
    
    return 0;
}

