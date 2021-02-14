#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter The Number : ";
    cin>>number;
    if(number%2==0)
    {
        cout<<number<<" Is Even Number";
    }
    else
    {
         cout<<number<<" Is Odd Number";
    }
    return 0;
}