// function to calculate sum of two numbers
#include <iostream>
using namespace std;

int sum (int a, int b){
    int s = a + b;
    return s;
}

// function to return minimum of two numbers
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout <<"Minimum of two numbers: " << min(5,15) << endl;  // values passed in the function call are called arguments
}