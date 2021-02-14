#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    int count=0;
    while(n)
    {
        if((n&1)==1)
        {
            count++;
        }
        n>>=1;
    }

    cout<<"The Number Of 1's In Binary Number Are : "<<count;
    return 0;
}