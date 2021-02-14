#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Any Number : ";
    cin>>num;
    int sum=0;
    int temp=num;
    while(temp>0)
    {
        
        int rem=temp%10;
        temp/=10;
        sum+=rem*rem*rem;
    }

    if(sum==num)
    {
        cout<<num<<" Is Armstrong Number";
    }
    else
    {
        cout<<num<<" Is Not Armstrong Number";
    }
    
    return 0;
}