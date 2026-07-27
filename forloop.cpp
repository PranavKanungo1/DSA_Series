#include <iostream>
using namespace std;

int main(){
   int n = 50;
   int oddSum = 0;
   for(int i = 1; i<=n;i++){
    if(i%2 ==1){
        oddSum +=i;
    }
   }
   cout<< "oddSum: " << oddSum;
   return 0;
}