/*
Another Solution Is That The Power Of Four Modulo 3 is Always One
Eg 4 % 3 = 1, 16 % 3 = 1 etc
*/

#include<iostream>
using namespace std;

bool Check(int n);

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    if(Check(n))
    {
        cout<<"Ture";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
bool Check(int n)
{
    if(n==0)
    {
        return false;
    }
    int x=__builtin_ctz(n);
    int y=__builtin_popcount(n);

    if(y==1)
    {
        if(x%2==0)
        {
            return true;
        }
    }
    return false;
}