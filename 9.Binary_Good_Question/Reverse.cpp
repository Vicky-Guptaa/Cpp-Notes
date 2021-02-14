#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Any Number : ";
    cin>>num;
    int rev=0;
    while(num>0)
    {
        int rem=num%10;
        num/=10;
        rev=rev*10+rem;
    }

    cout<<rev<<" Is The Reverse Number";

    return 0;
}