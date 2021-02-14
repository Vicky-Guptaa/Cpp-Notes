//You have to count the number of set bits in the given number.

/*
Kernighan's Algorith Is Used To Find No Of 1's In A Binary Number 

Eg 10101000  The Answer Will Be 3
*/

// Eficeint Approach By The Use Of Right Most Set Bit

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    int count=0;
    while(n)
    {
        int rsbm=(n&(~n+1));
        n=n-rsbm;
        count++;
    }
    cout<<count;
    return 0;
}