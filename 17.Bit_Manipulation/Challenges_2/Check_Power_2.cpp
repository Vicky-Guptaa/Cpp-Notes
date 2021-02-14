#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    int x=n-1;

    if((n&x)==0)
    {
        cout<<"The Number Is Power Of 2";
    }
    else
    {
        cout<<"The Number Is Not Power Of 2";
    }
    return 0;
}