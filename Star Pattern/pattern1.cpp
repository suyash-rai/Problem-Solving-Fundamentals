#include <iostream>
using namespace std;

void pattern1(int rows){
    for (int i = 0; i < rows; i++){                                                       
        for (int j = 0; j < rows; j++){                                                   
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cin >> rows;
    cout << endl;
    pattern1(rows);
    return 0;
}
// Pattern
//  ****
//  ****
//  ****
//  ****