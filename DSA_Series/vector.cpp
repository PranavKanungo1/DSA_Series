/// vector syntaxs
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //syntax 1
  //  vector<int> vec; // 0
 //   cout << vec[0]<< endl; // 0
    //syntax 2
   // vector<int> vec = {1,2,3,4,5}; // 5
   // cout << vec[0]<< endl; // 1

   // syntax 3
    vector<char> val = {'a', 'b', 'c', 'd', 'e'}; // 5 elements, all initialized to 0
 //   cout << vec[0]<< endl; // 0
  //  cout << vec[1]<< endl; // 0
    //cout << vec[2]<< endl; // 0
    //cout << vec[3]<< endl; // 0
    //cout << vec[4]<< endl; // 0
    // for each loop
    for(char i: val){
        cout << i << endl;
    }
    // now with cahracter values
    return 0;
}