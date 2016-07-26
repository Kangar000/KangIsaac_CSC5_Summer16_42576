/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 10:55 PM
 * Purpose: Sorting Orders
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void bubSort(int array[], int size){
    bool swap;
    int temp;
    cout << "Bubble sort" << endl;
    do{
        swap = false;
        for(int count=0; count <(size - 1); count++){
            if(array[count] > array[count + 1])
                temp = array[count];
                array[count] = array[count + 1];
                array[count+1] = temp;
                swap = true;
        }
        for(int i=0; i<size; i++){
            cout << array[i] << " " << endl;
        }
    }while(swap);
}

void selectS(int array[], int size){
    int startS, minIndex, minValue;
    cout << "Selection Sort: " << endl;
    for(startS = 0; startS < (size - 1); startS++){
        minIndex = startS;
        minValue = array[startS];
        for(int index = startS+1; index < size; index++){
            if(array[index] < minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startS];
        array[startS] = minValue;
        for(int i=0; i<size; i++){
            cout << array[i] << " " << endl;
        }
    }
}

int main(int argc, char** argv) {

    int array1[8] = {5,1,4,6,3,8,2,7};
    int array2[8] = {5,1,4,6,3,8,2,7};
    int i;
    
    cout << "Contents of First array: " << endl;
    for(i=0; i<8; i++){
        cout << " " << array1[i];
        cout << endl;
    }
    bubSort(array1,8);
    cout << "Contents of Second Array: " << endl;
    for(i=0; i<8; i++){
        cout << " " << array2[i];
        cout << endl;
    }
    selectS(array2,8);
    system("pause");
}

