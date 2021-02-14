#include<iostream>
using namespace std;

void Prime(int a,int b);

int main() {
    int a,b;
    cout<<"Display Prime Number Between : ";
    cin>>a;
    cout<<"To : ";
    cin>>b;

    Prime(a,b);

    return 0;
}

void Prime(int a,int b)
{
    int i,j;
    cout<<"Prime Number Between "<<a<<" And "<<b<<" Are : ";
    for(i=a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<i<<" ";
        }
    }
}