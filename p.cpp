#include <iostream>
using namespace std;

int prime(int n){
    bool isPrime = true;

    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
            isPrime = false;    
        }
    }
    return isPrime;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The prime numbers from 1 to " << n << " are: ";
    for(int i = 2; i <= n; i++){
        if(prime(i)){
            cout << i << " ";
        }
    }
    return 0;
}