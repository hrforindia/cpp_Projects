#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n ;
    double sum = 0.0;
    double mean = 0.0;
    double stddev = 0.0;

    //getting positive integers
    cout<<"Enter the values for N: ";
    cin >> n;
    double* numbers = new double[n];
    cout <<"Enter " << n << " positive numbers:" <<endl;
    for(int i =0;i< n;i++){
        cout << "Number " << (i+1) << ": ";
        cin >> numbers[i];
        sum+=numbers[i];
    }

    //calculate mean
    for(int i=0;i<n;i++){
        stddev += pow(numbers[i]-mean,2);
    }
    stddev = sqrt(stddev/n);
    cout<<"Standard Deviation: "<<stddev<<endl;

    // deallocation of the numbers
    delete[] numbers;

    return 0;
}