#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter Any Number : ";
    cin>>number;

    int fact=1;

    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }

    cout<<"The Factorial Of "<<number<<" : "<<fact;
    return 0;
}