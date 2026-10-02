#include <iostream>
using namespace std;

void pattern4(int rows){
    for (int i = 0; i < rows; i++){                                                   
        for (int j = 0; j <= i ; j++){                                               
            int differ = i - j ;                        
            if (differ % 2 == 0 ){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin >> rows;
    cout << endl;
    pattern4(rows);
    return 0 ;
}
// Pattern:-
//  1
//  01
//  101
//  0101
//  10101