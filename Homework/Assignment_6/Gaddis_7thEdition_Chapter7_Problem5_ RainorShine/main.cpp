/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 4:40 PM
 * Purpose: Rain or Shine
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int num_months = 3;
    const int num_days = 30;
    const int num_types = 3;
    char forecast[num_months][num_days];
    int counts [num_months][num_types];
    int rainyDays = 0;
    ifstream datafile;
    datafile.open("RainOrShine.txt");
    if(!datafile){
        cout << "Error opening data file." << endl;
    }else{
        for(int month = 0; month <num_months; month++){
            for(int day = 0; day < num_days; day++){
                datafile >> forecast[month][day];
            }
            datafile.ignore();
        }
        for(int month = 0; month < num_months; month++){
            for(int day = 0; day < num_days; day++){
                cout << forecast[month][day] << endl;
            }
            cout << endl;
        }
        for(int month = 0; month < num_months; month++){
            for(int type = 0; type < num_days; type++){
                counts[month][type] = 0;
            }
        }
        for(int month = 0; month < num_months; month++){
            for(int day = 0; day < num_days; day++){
                if(forecast[month][day] == 'R'){
                    counts[month][0]++;
                }
                if(forecast[month][day] == 'S'){
                    counts[month][1]++;
                }
                if(forecast[month][day] == 'C'){
                    counts[month][2]++;
                }
            }
        }
        for(int month = 0; month < num_months; month++){
            for(int type = 0; type < num_types; type++){
                cout << counts[month][type] << endl;
            }
            cout << endl;
        }
        cout << "Three-Month Analysis" << endl << endl;
    }
    
    return 0;
}

