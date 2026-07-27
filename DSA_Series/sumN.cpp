// program to find the sum of first n  numbers using function
#include <iostream>
using namespace std;

int sum(int n){
   int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout<< sum(5)<< endl;  // calling the function and passing the value of n as 5
    cout<< sum(10)<< endl;  // calling the function and passing the value of n as 10
}