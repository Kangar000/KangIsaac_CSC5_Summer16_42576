/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 6:09 PM
 * Purpose: Kinetic Energy
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

float knEnrgy(float mass, float velocity){
    float KE;
    KE = (0.5*mass*velocity*velocity);
    return KE;
}

int main(int argc, char** argv) {

    float mass, velocity, KE;
    cout << "Enter mass of body: " << endl;
    cin >> mass;
    cout << "Enter velocity: " << endl;
    cin >> velocity;
    
    KE = knEnrgy(mass,velocity);
    cout << "Kinetic Energy: " << KE << endl;
    system("pause");
    
    return 0;
}

