// if a number is power of 2 or not
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n <=0){
        cout << "Number is not a power of 2" << endl; 
    }

    for(; n%2 == 0; n /=2){

    }

    if (n==1){
        cout << "Number is a power of 2" << endl;
    } else {
        cout << "Number is not a power of 2" << endl;
    }
    return 0;
}