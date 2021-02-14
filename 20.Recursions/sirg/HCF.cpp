#include <iostream>
using namespace std;

int HCF(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    if(a%b==0)
    {
        return b;
    }
    if(b%a==0)
    {
        return a;
    }
    if(a>b)
    {
        return(HCF(a%b,b));
    }
    else
    {
        return(HCF(a,b%a));
    }
}

int main()
{
    int num1, num2;
    cout << "Enter Any Two Number : ";
    cin >> num1 >> num2;

    cout<<HCF(num1,num2)<<endl;
    return 0;
}