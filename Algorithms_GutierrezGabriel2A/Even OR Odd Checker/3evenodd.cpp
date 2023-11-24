#include <iostream>
using namespace std;

int main() {

    int numbers;
    cout << "Let's check if its even or odd: ";

    cin >> numbers;
    while (numbers != 0) {
        if (numbers % 2 == 0) {
            cout << numbers << " even number." << endl;
        } else {
            cout << numbers << " odd number." << endl;
        }
        cout << "type 0 to end program: ";
        cin >> numbers;
    }
    cout << "Program exited." << endl;

    return 0;
}
