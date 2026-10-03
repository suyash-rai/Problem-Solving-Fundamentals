#include <iostream>
using namespace std;

void pattern5(int rows){
    for (int i = 1; i <= rows; i++){
        //Right Triangle
        for (int j = 0; j < i; j++){
            cout<<j + 1;
        }
        //Space
        for (int j = 0; j < 2*(rows - i) ; j++){
            cout<<"-";
        }
        //Mirrod Triangle
        for (int j = i; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin >> rows;
    cout << endl;
    pattern5(rows);
    return 0 ;
}
// Pattern:-
// 1----------1
// 12--------21
// 123------321
// 1234----4321
// 12345--54321
// 123456654321