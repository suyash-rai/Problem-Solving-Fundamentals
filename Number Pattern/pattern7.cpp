#include <iostream>
using namespace std;

void pattern7(int rows){
    int noatboundary = (rows /2) +1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)                                          
        {                                                                       
            int left = j;                                                       
            int top = i;                                                        
            int right = rows - 1 - j;                                           
            int bottom = rows - 1 -i;                                           
            cout<<noatboundary- min(min(right , left), min(top , bottom));      
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin >> rows;
    cout << endl;
    pattern7(rows);
    return 0 ;
}
// Pattern:-
//  4444444
//  4333334
//  4322234
//  4321234
//  4322234
//  4333334
//  4444444