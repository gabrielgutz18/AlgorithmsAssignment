#include <iostream>
using namespace std;

int main() {
    cout << "Enter 5 numbers to find the minimum: " << endl;
    int minimum[5] = {};
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> minimum[i];
    }
    cout << "Enter 10 numbers to find the maximum: " << endl;
    int maximum[10] = {};
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> maximum[i];
    }
    int max = maximum[0];
    int min = minimum[0];
    for (int i = 1; i < 10; i++) {
        if (maximum[i] > max) {
            max = maximum[i];
        }
    }
    for (int i = 1; i < 5; i++) {
        if (minimum[i] < min) {
            min = minimum[i];
        }
    }
    cout << "The max number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
    return 0;
}
