#include <iostream>
using namespace std;

void pattern1(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin >> rows;
    cout << endl;
    pattern1(rows);
    return 0 ;
}
// Pattern:-
// 1
// 12
// 123
// 1234
// 12345