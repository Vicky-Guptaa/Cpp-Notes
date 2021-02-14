#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    
    int i=0;

    char hexa[15];
    
    while(n>0)
    {
        int rem=n%16;
        n/=16;

        if(rem>=0&&rem<=9)
        {
            hexa[i]=48+rem;
        }
        else
        {
          hexa[i]=55+rem;
        }
        i++;   
    }
    i--;
    cout<<"Hexadecimal : ";
    for(int j=i;j>=0;j--)
    {
        cout<<hexa[j];
    }

    return 0;
}