#include<iostream>
using namespace std;

void Swap(int a,int b);

int main() {
    int num1,num2;
    cout<<"Enter Two Numbers : "<<endl;
    cin>>num1>>num2;

    Swap(num1,num2);

    return 0;
}

void Swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"num1 : "<<a<<"\nnum2 : "<<b;
}