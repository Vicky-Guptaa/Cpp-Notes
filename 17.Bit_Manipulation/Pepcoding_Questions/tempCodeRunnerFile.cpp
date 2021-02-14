#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter A Number :";
    cin>>n;

    int rem=1,product=2,temp;
    while(temp)
    {
        if(temp==0)
        {
            break;
        }
        rem=n%product;
        temp=n/product;
        product*=2;
    }

    cout<<(rem*2+1);
    return 0;
}