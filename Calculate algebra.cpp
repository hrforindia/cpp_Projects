#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double fxy,rhxy,uxy,vxy,gxy;
    //Entring values for rhxy,uxy,vxy
    cout<<"Enter value for rhxy: ";
        cin>>rhxy;
    cout<<"Enter value for uxy: ";
        cin>>uxy;
    cout<<"Enter value for vxy: ";
        cin>>vxy;

    //calculating the given formula in the Question
    //Formula 1
    fxy = rhxy*(1 + 3*(-uxy + vxy) + 4.5 * (pow(-uxy + vxy,2)) - 1.5 * (pow(uxy,2) + pow(vxy,2)))/36.0;

    //Formula 2
    gxy = pow(fxy,2)+ pow(uxy,2)+ pow(vxy,2);

    //Output
    cout<<"Value of fxy: "<<fxy<<endl;
    cout<<"Value of gxy: "<<gxy<<endl;

    return 0;

}