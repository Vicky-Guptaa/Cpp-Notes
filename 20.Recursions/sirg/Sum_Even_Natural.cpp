#include<iostream>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    return (2*n+Sum(n-1));
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    cout<<Sum(n)<<endl;
    return 0;
}