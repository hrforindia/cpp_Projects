#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double x;
    cout<<"Enter the value of x: ";
    cin>>x;

    double term = 1.0;
    double exp_sum = term;
    int term_index =1;

    while(abs(term)>0.000001){
        term*= x/term_index;
        exp_sum += term;
        ++term_index;
    }

    cout<<"exp("<<x <<")= " << exp_sum<<endl;

    return 0;
}
