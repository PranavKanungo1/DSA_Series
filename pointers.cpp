#include <iostream>
#include <vector>
using namespace std;

int main(){
   int a = 10;
   int* ptr = &a; //ptr stores the address of a
   cout<<ptr<<endl; //prints the address of a
   cout<<*ptr<<endl; //prints the value of a

}