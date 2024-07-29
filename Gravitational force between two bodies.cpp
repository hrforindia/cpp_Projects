#include<iostream>
using namespace  std;
int main(){
const double G = 6.67430e-11;
double m1,m2,r;//(r = distance || m = mass of the body)
cout<<"Enter the value of m1 in (kg): ";
    cin>>m1;
cout<<"Enter the value of m2 in (kg): ";
    cin>>m2;
cout<<"Enter the distance between the distance of two objects: ";
    cin>>r;
//formula for Force Calculation = F=G(m1*m2/r*r)
//defining Force
    double force = G*(m1*m2)/(r*r);
cout<<"Gravitational Force:  "<<force<<"N"<<endl;
return 0;
}

