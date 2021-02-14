/*
It Is The No Of Mismatch Digits/Character In A String Or A Number.
Eg 10001 And 01011 
   Output - 3
*/
#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter Any Two Number : \n";
    cin>>num1>>num2;

    int n=num1^num2;
    int count=0;
    while(n)
    {
        if((n&1)==1)
        {
           count++;
        }
        n=n>>1;
    }

    cout<<count;
    return 0;
}