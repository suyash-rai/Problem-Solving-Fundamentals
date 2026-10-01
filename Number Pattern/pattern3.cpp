#include <iostream>
using namespace std;

void pattern3(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <(rows - i ); j++)
        {
            cout<<j + 1 ;
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
    pattern3(rows);
    return 0 ;
}
// Pattern:-
// 123456
// 12345
// 1234
// 123
// 12
// 1