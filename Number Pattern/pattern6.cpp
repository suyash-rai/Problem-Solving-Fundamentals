#include <iostream>
using namespace std;

void pattern6(int rows){
    int num = 1 ;                                           
    for (int i = 1; i <= rows; i++)                         
    {                                                       
        for (int j = 1; j <= i ; j++)                       
        {                                                   
            cout<<num<<" " ;
            num = num +1 ;
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin >> rows;
    cout << endl;
    pattern6(rows);
    return 0 ;
}
// Pattern:-
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15