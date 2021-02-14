// In Reverse Bit Use Same Data type Int or Unsigned Int Input As Well As Output
#include<iostream>
using namespace std;

int main() {
    unsigned int X;
    cout<<"Enter Any Number : ";
    cin>>X;

    int i=1;
    unsigned int n=X,Y=0;
    while(n)
    {
           if(n&1==1)
            {
                int mask=(1<<(32-i));
                Y=Y^mask;
            }
            n=n>>1;
            i++;
    }
    cout<<Y;
    return 0;
}