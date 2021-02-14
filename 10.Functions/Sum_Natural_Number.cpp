#include<iostream>
using namespace std;

int Sum(int n);

int main() {
    int num;
    cout<<"Sum Of Natural Number Upto : ";
    cin>>num;

    cout<<"The Sum : "<<Sum(num);
    return 0;
}

int Sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    return sum;
}