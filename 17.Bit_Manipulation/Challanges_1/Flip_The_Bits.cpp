/*
Flip The Bit 

Eg 101 After Fliping 010
Eg 101010 After Fliping 010101
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    
    int temp=n;
    int i=0;
    while(temp)
    {
        int mask=(1<<i);
        n=n^mask;
        temp=temp>>1;
        i++;
    }
    cout<<n;

    return 0;
}