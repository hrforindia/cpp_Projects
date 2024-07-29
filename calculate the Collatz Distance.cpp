#include <iostream>
using namespace std;
int main() {
    int number;
  
    // Input a positive integer from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Validate input (positive integer)
    while (number <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    // Print Collatz sequence for the entered number
    cout << "Collatz sequence for " << number << ": ";
    while (number != 1) {
        cout << number << " ";
        if (number % 2 == 0)
            number = number / 2;
        else
            number = 3 * number + 1;
    }
    cout << "1" << endl;

    return 0;
}
