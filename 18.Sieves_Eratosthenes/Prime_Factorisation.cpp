#include<iostream>
using namespace std;

void PrimeFactor(int n)
{
    int temp=n;
    for(int i=2;i<n;i++)
    {
        if(temp%i==0)
        {
            cout<<i<<" ";
            temp=temp/i;
            i--;
        }
    }
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    PrimeFactor(n);
    return 0;
}