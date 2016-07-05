/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 5, 2016, 2:55 PM
 * Purpose: Area of Rectangles
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
    float l1, l2, w1, w2, area1, area2;
    
    //Input Data
    cout << "Enter the length of the first rectangle: " << endl;
    cin >> l1;
    cout << "Enter the width of the first rectangle: " << endl;
    cin >> w1;
    cout << "Enter the length of the second rectangle: " << endl;
    cin >> l2;
    cout << "Enter the width of the second rectangle: " << endl;
    cin >> w2;
    //Process the Data
    area1 = l1 * w1;
    area2 = l2 * w2;
    
    //Output the processed Data
    cout << "The area of the first rectangle is " << area1 << endl;
    cout << "The area of the second rectangle is " << area2 << endl;
    if(area1 == area2){
        cout << "The two areas are equal" << endl;
    }else if(area1 > area2){
        cout << "The area of the first rectangle is larger than the area of the second" << endl;
    }else{
        cout << "The area of the second rectangle is larger than the area of the first" << endl;
    }
    
    
    //Exit Stage Right!
    return 0;
}