#include <iostream>
using namespace std;
int main(){
    const int SIZE = 10;
    double numbers[SIZE];
    double sum = 0;
    double average = 0;
    float max = 0;
    float min = 0;

    cout<<"Enter 10 numbers"<<endl;
    for (int i=0;i<=SIZE-1;i++){
        cout<<" Number "<<i+1<<": ";
            cin>>numbers[i];
        sum += numbers[i];

        if(i == 0){
            max = min = numbers[i];
        }
        else {
            if(numbers[i] > max ){
                max = numbers[i];
            }
            if(numbers[i] < min){
                min = numbers[i];
            }
        }
        
    }
    average = sum/SIZE;


cout<<"Sum: "<<sum<<endl;
cout<<"Average: "<<average<<endl;
cout<<"Minimum: "<<min<<endl;
cout<<"Maximum: "<<max<<endl;

return 0;
}