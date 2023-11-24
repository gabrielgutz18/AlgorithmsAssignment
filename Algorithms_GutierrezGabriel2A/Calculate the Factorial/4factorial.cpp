#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    cout << "Factoral calculator\n" << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Enter a number." << endl;
        return 1;  
    }
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
