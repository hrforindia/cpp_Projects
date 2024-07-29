#include <iostream>
#include <cmath> // For square root function
using namespace std;

class Calculator {
public:
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
                      else cout << "Error! Division by zero." << endl; 
                      break;
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
    void printingStars(){
        int numStars = 10;
        for(int i=0;i<numStars;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
};

int main() {
    Calculator calc;
    char choice;

    cout << "Select calculation type:\n1. Basic Calculations\n2. Advanced Calculations\n3. Printing Stars\nEnter choice or 'q' to quit: ";
    cin >> choice;

    switch (choice) {
        case '1':
            calc.basicCalculations();
            break;
        case '2':
            calc.advancedCalculations();
            break;
        case '3':
            calc.printingStars();
            break;
        case 'q':
        case 'Q':
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
