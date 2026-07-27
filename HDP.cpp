#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper Half
    for (int i = 0; i < n; i++) {

        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Inner spaces and second star
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n - 2; i >= 0; i--) {

        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Inner spaces and second star
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}