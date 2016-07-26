/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 3:41 PM
 * Purpose: Number Analysis Program
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int array[30], counter, num, total;
    int small, large;
    ifstream infile;
    
    infile.open("numbers.txt");
    infile >> num;
    counter = 0;
    while(infile){
        array[counter] = num;
        infile >> num;
        counter++;
    }
    
    small = array[0];
    large = array[0];
    total = 0;
    
    for(int j=0; j<counter; j++){
        if(array[j] > large){
            large = array[j];
        }else{
            small = array[j];
            total = total + array[j];
        }
    }
    cout << "The smallest value is: " << small << endl;
    cout << "The largest value is: " << large << endl;
    cout << "total of numbers in array: " << total << endl;
    cout << "Average of numbers in array: " << total/counter << endl;
    infile.close();
    
    
    
    return 0;
}

