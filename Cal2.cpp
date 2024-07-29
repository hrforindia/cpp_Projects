#include <iostream>
#include <cmath> // For square root function
using namespace std;

void basicCalculations() {
    char op;
    float num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2 << endl; break;
        case '-': cout << "Result: " << num1 - num2 << endl; break;
        case '*': cout << "Result: " << num1 * num2 << endl; break;
        case '/': if (num2 != 0) cout << "Result: " << num1 / num2 << endl; 
                  else cout << "Error! Division by zero." << endl; break;
        default: cout << "Invalid operator!" << endl; break;
    }
}

void advancedCalculations() {
    int choice;
    cout << "1. Area of Rectangle\n2. Square root of a number\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        float length, breadth;
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Area: " << length * breadth << endl;
    } else if (choice == 2) {
        float num;
        cout << "Enter number: ";
        cin >> num;
        if (num >= 0) cout << "Square root: " << sqrt(num) << endl;
        else cout << "Error! Negative number." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
}

int main() {
    int choice;
    cout << "Select calculation type:\n1. Basic Calculations\n2. Advanced Calculations\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        basicCalculations();
    } else if (choice == 2) {
        advancedCalculations();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
