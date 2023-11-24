#include <iostream>
using namespace std;

int main() {
    double answer = 0.0;
    char opp;

    cout << "Enter first number (or type 'q' to quit): ";
    cin >> answer;
    while (true) {
        cout << "Enter operation [+,-,*,%] or type 'x' to quit: ";
        cin >> opp;
        
        if (opp == 'x' || opp == 'X') {
            cout << "Final result: " << answer << endl;
            break;
        }
        
        double num;
        cout << "Enter next number: ";
        
        if (!(cin >> num)) {
            cout << "Invalid input. Exiting." << endl;
            break;
        }
    
        switch (opp) {
            case '+':
                answer += num;
                break;
            case '-':
                answer -= num;
                break;
            case '*':
                answer *= num;
                break;
            case '/':
                if (num != 0) {
                    answer /= num;  
                } else {
                    cout << "Error: Division by zero is undefined." << endl;
                    continue;
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                continue;
        }
        
        cout << "Intermediate result: " << answer << endl;
    }

    return 0;
}
