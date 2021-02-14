#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Any Number : ";
    cin>>num;

    while(num>0)
    {
        int rem=num%10;
        num/=10;
        cout<<rem<<endl;
    }
    return 0;
}