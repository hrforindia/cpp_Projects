#include <iostream>
using namespace std;

int main() {
    int height = 5; // Height of the letter 'W'

    for (int i = 0; i < height; i++) {
        // Print the left part of 'W'
        cout << "*";
        for (int j = 0; j < height; j++) {
            if (j == i || j == height - i - 1)
                cout << "*";
            else
                cout << " ";
        }

        // Print the right part of 'W'
        for (int j = 0; j < height; j++) {
            if (j == height - i - 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}
