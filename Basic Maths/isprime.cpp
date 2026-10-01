#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout<<"Enter a number : ";
    cin>>n;
    if (n <= 1) {
        cout << "Given number is not a prime.";
        return 0;
    }
    for (int i = 1; i*i <= n ; i++){                                                                   
        if (n % i == 0){                                                               
            count++;                                                    
            if ((n / i) != i){
                count++;
            }
        }
    }
    if (count == 2){
        cout<<"Given number is prime.";
    }
    else{
        cout<<"Given number is not a prime.";
    }
}
// This program has two main purposes. First, it provides a better way to check divisors rather than iterating through all the numbers, which  
// would take O(n) time. Instead, we only iterate up to sqrt(n), because after that, all the factors start repeating. You can verify this  
// yourself with an example.
// The second purpose is to understand a better definition of a prime number: a number that has exactly two factors — 1 and itself.

// TIME COMPLEXITY : O(sqrt(n))
// SPACE COMPLEXITY : O(1)