#include <iostream>
using namespace std;

int main(){
    double positive_number;
    cout<<"Enter a Positive number"<<endl;
    cin>> positive_number;

    if( positive_number<=0){
        cout<<"Put a Positive number and greater then Zero"<<endl;
    }
    double m = positive_number/2.0;
    const double accuracy = 0.001;
    const double increment = 0.001;

    while(abs(m * m - positive_number)>= accuracy) {
        if(m * m > positive_number){
            m -= increment;
        }
        else{
            m += increment;        
            }
    }
    cout<<"Square root of "<<positive_number<<" approximately: "<<m<<endl;
    return 0;
}