/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */

const int SIZE = 20;

void sortS(string names[], int size){
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

int binS(string emps[], int SIZE, string eName){
    int first = 0, last = SIZE - 1, middle, position = -1;
    bool found = false;
    while(!found && first <= last){
        middle = (first + last)/2;
        if(emps[middle].compare(eName) == 0){
            found = true;
            position = middle;
        }
        else if(emps[middle].compare(eName) > 0){
            last = middle - 1;
        }
        else{
            first = middle + 1;
        }
    }
    return position;
}

int main(int argc, char** argv) {

    int results;
    string eName;
    string emps[SIZE] = {"Karan","Milley","Gary","Peter","Nelon","Shilley",
    "Master","Manela","Ranga","Michelle","Gadies","Tharanga","Malik","Charan",
    "Jhonny","Dietal","Oli","Tendulkar","Raina","Ghambir"};
    
    cout << "Enter employee name you wish to search: " << endl;
    cin >> eName;
    
    sortS(emps,SIZE);
    results = binS(emps,SIZE,eName);
    if(results == -1)
        cout << eName << " name doesn't exist." << endl;
    else
        cout << "Element name " << eName << " found at the specified index " << results + 1 << " in the array." << endl;
        cout << "Element names list is: " << endl;
        
        for(int index = 0; index<SIZE; index++){
            cout << index+1 << right << setw(10) << emps[index] << endl;
        }
    
    return 0;
}

