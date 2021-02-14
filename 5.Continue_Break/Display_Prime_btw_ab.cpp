#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter Two Number : "<<endl;
    cin>>a>>b;
    
    for(a;a<=b;a++)
    {
        int i=2;
        for(i;i<a;i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(a==i)
        {
            cout<<a<<" Is A Prime Number"<<endl;
        }
    }
    return 0;
}