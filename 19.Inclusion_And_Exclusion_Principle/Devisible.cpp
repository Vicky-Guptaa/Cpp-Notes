#include<iostream>
using namespace std;

int Devisible(int n,int a,int b)
{
    int x=a*b;
    a=n/a;
    b=n/b;
    x=n/x;

    return (a+b-x);
}

int main() {
    int n;
    cout<<"To Check Devisibility Upto : ";
    cin>>n;

    int a,b;
    cout<<"Enter Any Two Number To Check Devisibility : ";
    cin>>a>>b;

    cout<<Devisible(n,a,b);

    return 0;
}