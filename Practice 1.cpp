#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input number of rows for the pattern
    cout << "Enter number of rows for the pattern: ";
    cin >> rows;

    // Loop through each row
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        cout << string(rows - i, ' ');

        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
