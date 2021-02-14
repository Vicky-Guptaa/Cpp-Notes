#include<iostream>
using namespace std;

int Toggle_Bit(int num,int pos)
{
    int mask=(1<<pos);
    return (num^mask);
}

int main() {
    int n,i;
    cout<<"Enter Any Number : ";
    cin>>n;
    cout<<"Enter The Set Bit Position : ";
    cin>>i;

    cout<<Toggle_Bit(n,i);
    return 0;
}