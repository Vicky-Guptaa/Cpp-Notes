#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Any Number : ";
    cin>>num;

    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
            num/=i;
            i--;
        }
    }
    return 0;
}