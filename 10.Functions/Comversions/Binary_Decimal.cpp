#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Binary Number : ";
    cin>>n;
    int temp=n,i=0,decimal=0;
    while(temp>0)
    {
        int rem=temp%10;
        temp/=10;
        decimal=pow(2,i)*rem+decimal;
        i++;
    }

    cout<<n<<" In Decimal : "<<decimal;

    return 0;
}
