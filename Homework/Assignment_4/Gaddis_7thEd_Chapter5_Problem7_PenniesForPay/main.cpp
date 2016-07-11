/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 11, 2016, 2:57 PM
 * Purpose: Distance Traveled
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float speed, time, disTrav = 0;
    cout << "Enter the speed of the vehicle in mph(miles per hour): " << endl;
    cin >> speed;
    cout << "Hours traveled by the vehicle" << endl;
    cin >> time;
    
    if(speed >= 1)
    {
        if(time>1)
        {
            cout << "Hour     Distance Traveled" << endl;
            cout << "__________________________" << endl;
            for(int i = 1; i <= time; i++)
            {
                disTrav = speed * i;
                cout << i << "     " << disTrav << endl;
            }
        }
        else
        {
            cout << "Time can't be less than 1" << endl;
        }
    }
    else
    {
        cout << "Speed can't be negative" << endl;
    }
    
    
    return 0;
}

