#include<iostream>
using namespace std;

void Binomial_Coef(int n,int r);
int Factorial(int a);

int main() {
    int n,r;
    cout<<"nCr \nEnter The Value Of n :";
    cin>>n;
    cout<<"r : ";
    cin>>r;

    Binomial_Coef(n,r);
    return 0;
}

void Binomial_Coef(int n,int r)
{
    int Coef=(Factorial(n))/(Factorial(n-r)*Factorial(r));
    cout<<"Binomial Coef : "<<Coef;
}

int Factorial(int a)
{
    int fact=1;
    for(int i=a;i>1;i--)
    {
        fact*=i;
    }
    return fact;
}