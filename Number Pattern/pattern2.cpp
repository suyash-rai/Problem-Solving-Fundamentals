#include <iostream>
using namespace std;

void pattern2(int rows){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
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
    pattern2(rows);
    return 0 ;
}
// Pattern:-
// 1
// 22
// 333
// 4444
// 55555