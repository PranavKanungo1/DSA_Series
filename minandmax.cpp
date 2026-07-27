#include <iostream>
using namespace std;

int main(){
    int nums[] = {88,98,-47,33,44,66};
    int size = 6;
    int smallest = nums[0];
    int largest = nums[0];
    for(int i = 0; i<size; i++){
        smallest = min (smallest, nums[i]);
        largest = max (largest, nums[i]);
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
    return 0;
}