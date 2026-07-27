#include <iostream>
using namespace std;

int main(){
    int i = 1, n = 60, Sum = 0;
   
    while(i<=n){
        if(i%2 !=0){
            Sum += i;
        }
       i++;
    }
    cout <<"Sum of odd no.: " <<Sum;
    return 0;
}