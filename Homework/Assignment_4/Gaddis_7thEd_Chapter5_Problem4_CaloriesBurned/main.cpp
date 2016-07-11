/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 2:57 PM
 * Purpose: Calories Burned
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float total;
    cout << "Time(min(s)) Calories Burned" << endl;
    
    for (int min = 10; min <= 30; min +=5)
    {
        total = (3.9) * min;
        cout << total << " burned in " << min << endl;
    }
    
    
    return 0;
}

