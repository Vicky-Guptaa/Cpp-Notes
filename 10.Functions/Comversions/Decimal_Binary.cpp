#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    
    int binary=0,x=1;

    while(n>0)
    {
        int rem=n%2;
        n/=2;
        binary+=rem*x;
        x*=10;

    }
    cout<<"Binary : "<<binary;
    
    return 0;
}