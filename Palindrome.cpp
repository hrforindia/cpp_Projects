#include <iostream>
using namespace std;
int main() {
    int number, originalNumber,remainder;
    int reversedNumber = 0 ;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    // Check if original number is equal to reversed number
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome number." << endl;
    } else {
        cout << originalNumber << " is not a palindrome number." << endl;
    }

    return 0;
}
