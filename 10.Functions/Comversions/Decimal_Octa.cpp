#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    int octa=0,x=1;

    while(n>0)
    {
        int rem=n%8;
        n/=8;
        octa+=rem*x;
        x*=10;
    }

    cout<<"Octadecimal : "<<octa;
    return 0;
}