#include<bits/stdc++.h>
using namespace std;

int main() {
    string c;
    cout<<"Enter Any Hexadecimal Number : ";
    cin>>c;
    int s=c.size();
    int decimal=0;
    int x=1;
    
    for(int i=s-1;i>=0;i--)
    {
        if(c[i]>='0'&&c[i]<='9')
        {
            decimal+=x*(c[i]-'0');
        }
        else if(c[i]>='A'&&c[i]<='F')
        {
            decimal+=x*(c[i]-'A'+10);
        }
        x*=16;
    }

    cout<<"Decimal : "<<decimal;
    return 0;
}