#include<iostream>
using namespace std;

void Triplet(int a,int b,int c);

int main() {
    int n1,n2,n3;
    cout<<"Enter Any Three Number : ";
    cin>>n1>>n2>>n3;

    Triplet(n1,n2,n3);

    return 0;
}

void Triplet(int a,int b,int c)
{
 
    
    if(a*a+b*b==c*c)
    {
        cout<<a<<" "<<b<<" "<<c<<" Are Pythagorian Triplet";
    }
    else
    {
        cout<<a<<" "<<b<<" "<<c<<" Are Not Pythagorian Triplet";
    }
    
}