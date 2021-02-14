#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Any Number : ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<" Is Odd Number"<<endl;
    }
    return 0;
}