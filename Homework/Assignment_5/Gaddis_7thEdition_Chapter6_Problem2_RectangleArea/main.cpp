/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 12:31 PM
 * Purpose: Rectangle Area
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */


float getLength();
float getWidth();
float getArea(float,float);
void display(float,float,float);

int main(int argc, char** argv) {

    float length, width, area;
    length = getLength();
    width = getWidth();
    area = getArea(length,width);
    display(length,width,area);
    
    return 0;
}

float getLength(){
    float len;
    cout << "Enter length of the rectangle: ";
    cin >> len;
    
    while(len <= 0){
        cout << "Length of a rectangle should be greater than zero: ";
        cin >> len;
    }
    return len;
}

float getWidth(){
    float w;
    cout << "Enter width of the rectangle: ";
    cin >> w;
    
    while(w <= 0){
        cout << "Width of a rectangle should be greater than zero: ";
        cin >> w;
    }
    return w;
}

float getArea(float l, float w){
    float a;
    a= l*w;
    return a;
}

void display(float l, float w, float a){
    cout << endl;
    cout << "Length of the rectangle: " << l << endl;
    cout << "Width of the rectangle: " << w << endl;
    cout << "Area of the rectangle: " << a << endl;
}