#include <iostream>
using namespace std;

void pattern4(int rows){
    for (int i = 0; i < rows; i++){ 
        for (int j = 1; j < rows - i; j++){                                  
            cout << "-";
        }
        // Alphabets
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < (2 * i + 1); j++){
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        // Space
        for (int j = 1; j < rows - i; j++){
            cout << "-";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin>>rows;
    pattern4(rows);
    return 0;
}
// NOTE:- It works only for rows <= 26 only. 
// If you enter 27+, please don't blame the code.

// Pattern :-
// -----A-----
// ----ABA----
// ---ABCBA---
// --ABCDCBA--
// -ABCDEDCBA-
// ABCDEFEDCBA