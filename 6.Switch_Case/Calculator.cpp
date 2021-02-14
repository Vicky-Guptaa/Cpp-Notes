#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter Two Number : \n";
    cin>>num1>>num2;

    char c;
    cout<<"Enter Operator : ";
    cin>>c;
    


    switch(c)
    {
        case '+': cout<<"Sum : "<<num1+num2;  break;

        case '-': cout<<"Subtraction : "<<num1-num2;  break;

        case '*': cout<<"Multiplication : "<<num1*num2;  break;

        case '/': cout<<"Devison : "<<float(num1)/num2;  break;     

        default : cout<<"Invalid Operator Selected";    
    }
    return 0;
}