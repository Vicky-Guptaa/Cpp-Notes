#include<iostream>
using namespace std;

void Fibonacci(int n);

int main() {
    int Upto;
    cout<<"Print Fibonacci Series Upto : ";
    cin>>Upto;

    Fibonacci(Upto);
    return 0;
}

void Fibonacci(int n)
{
    int a=0,b=1;

    cout<<"Fibonacci Series : ";

    for(int i=0;i<n;i++)
    {
        int temp=b;
          cout<<a<<" ";
        b=b+a;
        a=temp;
      
    }
}