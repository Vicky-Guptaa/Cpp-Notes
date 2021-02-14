/*
Number of leading zeros, trailing zeroes and number of 1’s of a number
It can be done by using inbuilt function i.e.

Number of leading zeroes: __builtin_clz(x)

Number of trailing zeroes: __builtin_ctz(x)
Number of 1-bits: __builtin_popcount(x)

*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    cout<<"Leading 0's : "<<__builtin_clz(n)<<endl;
    cout<<"Trailing 0's : "<<__builtin_ctz(n)<<endl;
    cout<<"1 - Bits  : "<<__builtin_popcount(n)<<endl;

    return 0;
}