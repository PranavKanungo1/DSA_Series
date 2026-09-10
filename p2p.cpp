#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 100;
    int* ptr = &a; //ptr stores the address of a
    int** ptr2 = &ptr; //ptr2 stores the address of ptr

    cout << &ptr << endl; //prints the address of ptr
    cout << ptr2 << endl; //prints the address of ptr
}