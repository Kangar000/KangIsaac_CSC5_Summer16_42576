/* 
 * File:   main.cpp
 * Author: Isaac Kang
 * Created on July 22, 2016, 4:53 PM
 * Purpose: Quarterly Sales Statistic
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float divSales[6][4];
    float prevSales = 0.0;
    float totSales = 0.0;
    int i=0, j=0;
    int highSales = 0;
    
    for(i=0; i<6; i++){
        cout << "Enter the sales information for division " << (i+1) << ": ";
        cout << endl;
        for(j=0; j<4; j++){
            cout << "Enter Quarter " << (j+1) << " sales: " ;
            cin >> divSales[i][j];
        }
    }
    cout << "**********LIST OF THE SALES FIGURES BY DIVISION**********" << endl;
    for(j=0; j<4; j++){
        cout << "Quarter " << (j+1) << ": " << endl;
        totSales = 0.0;
        highSales = 0;
        for(i=0; i<6; i++){
            totSales = totSales + divSales[i][j];
            if(j==0){
                cout << "Division " << (i+1) << " : " << endl;
                cout << "Sales = " << divSales [i][j] << endl;
                cout << "Previous Quarter data not available as this is the first quarter." << endl;
                highSales = 1;
            }else{
                cout << "Division " << (i+1) << " : " << endl;
                cout << "Sales = " << divSales [i][j] << endl;
                float stats = (float)divSales[i][j] - (float)divSales[i][j-1];
                int prevStat = (int)((stats/(float)divSales[i][j-1])*100);
                if(prevStat > 0){
                    cout << "Sales increased by: " << prevStat << "%" << endl;
                }else{
                    cout << "Sales decreased by: " << prevStat << "%" << endl;
                }
                if(divSales[i][j] > divSales[i][j-1]){
                    highSales = i;
                }
            }
        }
        cout << "The total sales for the quarter: " << totSales << endl;
        if(j==0){
            cout << "Previous Quarter data is not available because this is the first quarter." << endl;
        }else{
            float stat = totSales - prevSales;
            int prevStat = (int) ((stat/prevSales)*100);
            cout << "Company Sales increased by: " << prevStat << "% from the previous quarter" << endl;
        }
        cout << "The average sales per Division: " << (totSales/6) << endl;
        cout << "The division with the highest sales for that quarter: Division " << highSales << endl;
        prevSales = totSales;
    }
    system("pause");
    
    
    return 0;
}

