#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char operator1;
    int choice;
    float num1,num2;
    cout<<"Select the calcution type"<<endl;
    cout<<"1. Basic Calculations(+, -, *, /)"<<endl;
    cout<<"2. Advance Calculations"<<endl;
    if(choice == 1){
        while(true){
        cout<<"Enter Operator(+,-,*,/): ";
            cin>>operator1; 
        //Checking wheather the opearator is valid or not
        if(operator1 == '+' || operator1 == '-' || operator1 == '*' || operator1 == '/' )
                {
            break; //exiting the loop here
                }
        else{
            cout<<"Error! Choose the correct operator";
        }
        }
        
        //-------------------------------------------------------------------------------------------------  
    
        //enter two opearators
        cout<<"Enter First Number: ";
        cin>>num1;
        cout<<"Enter Second Number: ";
        cin>>num2;
        switch(operator1){
            case '+':
                cout<<"The Total Sum is: "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"Subtraction is: "<<num1-num2<<endl;
                break;
            case '*':
                cout<<"Multipliation is: "<<num1*num2<<endl;
                break;
            case '/':
                if(num2!=0)
                cout<<"Division is: "<<num1/num2<<endl;
                else
                    cout<<"Error!"<<endl;
                break;
        default:
            cout<<"Wrong operator choosen. Select the correct operator"<<endl;
            break;
        }
    }
    else if(choice == 2){
        int onemorechoice;
        cout<<"1. Area of Rectangle"<<endl;
        cout<<"2. Square root of a number"<<endl;
        cout << "Enter your choice (1 or 2): ";
        cin>>onemorechoice;
        if(onemorechoice == 1){
            int length,breadth;
            int area;
            cout<<"Enter Length: " ;
            cin>>length;
            cout<<"Enter Breadth: ";
            cin>>breadth;
            area = length*breadth;
            cout<<"Total area of the Rectangle is: "<<area<<endl;

        } else if(onemorechoice == 2){
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
            } else {
                cout << "Error! Square root of a negative number is not defined in real numbers." << endl;
            }
        } else {
        cout << "Error! Invalid choice." << endl;
    }
        }

    
    return 0;
    
}