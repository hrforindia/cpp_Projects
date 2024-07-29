#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double number;
    cout<<"Enter a Positive number: ";
    cin>>number;

    if(number < 0){
        cout<<"Please enter a positive number: "<<endl;
        return 1;
    }

    double guess = number / 3.0; //initial guess
    double accuracy = 0.00001;
    double difference;

    do{
        double previous_guess = guess;
        guess = (2.0 * guess + number/(guess*guess))/3.0; //Newton-Raphson iteration
        difference = abs(guess - previous_guess);
    } while(difference > accuracy);

    cout<<"Cube root of "<<number<< "is approx "<<guess<<endl;

    return 0;
}