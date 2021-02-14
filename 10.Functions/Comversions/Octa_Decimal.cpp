#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Octa Decimal Number : ";
    cin>>n;
    
    int decimal=0,i=1;
    while(n>0)
    {
        int rem=n%10;
        n/=10;
        decimal+=rem*i;
        i*=8;
    }

    cout<<"Decimal : "<<decimal;
    return 0;
}
