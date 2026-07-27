#include <iostream>
using namespace std;

int binaryToDecimal(int biNum){
    int ans = 0, pow = 1;
    while(biNum){
        int rem = biNum % 10;
        ans += rem * pow;
        pow *= 2;
        biNum /= 10;
    }
    return ans; // decimal number
}

int main(){
    int biNum = 111100;
    cout << binaryToDecimal(biNum) << endl;
    return 0;
}
