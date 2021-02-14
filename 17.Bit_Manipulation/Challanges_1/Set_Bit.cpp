#include<iostream>
using namespace std;

int Set_Bit(int a,int b)
{
    int mask=(1<<b);
    return (a|mask);
}

int main() {
    int n,i;
    cout<<"Enter Any Number : ";
    cin>>n;
    cout<<"Enter The Set Bit Position : ";
    cin>>i;

    cout<<Set_Bit(n,i);
    
    return 0;
}