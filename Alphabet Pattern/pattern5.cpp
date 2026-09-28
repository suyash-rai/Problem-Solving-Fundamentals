#include <iostream>
using namespace std;

void pattern5(int rows){
    char ch = 'A' + (rows - 1);             
    for (int i = 0; i < rows; i++){                                       
        for (char a = ch; a <= ch + i; a++){
            cout << a;
        }
        cout << endl;
        ch = ch - 1;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin>>rows;
    pattern5(rows);
    return 0;
}

// Pattern :-
//  D
//  CD
//  BCD
//  ABCD