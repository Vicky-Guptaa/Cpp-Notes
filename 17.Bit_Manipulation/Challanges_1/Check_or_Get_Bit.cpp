#include<iostream>
using namespace std;

int Check_Or_Get(int a,int b)
{
    int mask=(1<<b);
    return ((a&mask)!=0);
}

int main() {
    int n,i;
    cout<<"Enter Any Number : ";
    cin>>n;
    cout<<"Enter The Set Bit Position : ";
    cin>>i;

    cout<<Check_Or_Get(n,i);
    return 0;
}