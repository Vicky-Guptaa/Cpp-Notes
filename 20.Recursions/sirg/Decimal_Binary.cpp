#include<iostream>
#include<math.h>
using namespace std;

void Binary(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    else
    {
        Binary(n/2);
        cout<<n%2;   
    }
    
}

int Binary1(int n,int i)
{
    if(n==0)
    {
        return 0;
    }
    int rem=n%2;
    n/=2;
    return (rem*pow(10,i)+Binary1(n,i+1));
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    // Binary(n);
    cout<<Binary1(n,0)<<endl;
    return 0;
}