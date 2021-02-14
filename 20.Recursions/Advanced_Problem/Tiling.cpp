#include<iostream>
using namespace std;

int Tilings(int n)
{
    if(n==1||n==2)
    {
        return n;
    }
    return Tilings(n-1)+Tilings(n-2);
}

int main() {
    int n;
    cout<<"Enter Any number : ";
    cin>>n;
    cout<<Tilings(n)<<endl;
    return 0;
}