#include<iostream>
using namespace std;

int main() {
    int Upto;
    cout<<"Display Fibonacci Series Upto : ";
    cin>>Upto;

    int a=0;
    int b=1;
    for(int i=1;i<=Upto;i++)
    {
        cout<<a<<" ";
        int temp=b;
        b=a+b;
        a=temp;
    }
    return 0;
}