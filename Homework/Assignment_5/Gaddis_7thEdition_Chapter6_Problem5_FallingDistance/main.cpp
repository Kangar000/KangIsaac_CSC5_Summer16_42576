/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 1:36 PM
 * Purpose: Falling Distance
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

float fallingDistance(int time){
    float distance, g = 9.8;
    distance = static_cast<float>(0.5*g*time*time);
    return distance;
}

int main(int argc, char** argv) {

    float distance;
    int time;
    
    for(time=1; time<=10; time++){
        distance = fallingDistance(time);
        cout << "Distance at time interval " << time << " in meters is: " << distance << endl;
    }
    system("pause");
    
    
    return 0;
}

