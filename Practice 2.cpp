#include <iostream>
#include <cmath> // for abs()

using namespace std;

double squareRoot(double num) {
  if (num < 0) {
    cout << "Error: Square root is not defined for negative numbers." << endl;
    return -1.0;
  }

  double guess = 1.0;
  double error = 0.001;
  double root;

  while (abs(guess * guess - num) > error) {
    root = (guess + num / guess) / 2;
    guess = root;
  }

  return guess;
}

int main() {
  double number;

  cout << "Enter a positive number: ";
  cin >> number;

  double root = squareRoot(number);

  if (root != -1.0) {
    cout << "The square root of " << number << " up to an accuracy of 0.001 is: " << root << endl;
  }

  return 0;
}
