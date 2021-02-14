#include<iostream>
using namespace std;

int main() {
    int side;
    cout<<"Enter The Side Of Rohmbus : "<<endl;
    cin>>side;

    for(int i=side;i>0;i--)
    {
        for(int j=1;j<side*2;j++)
        {
            if(j>=i&&j<side+i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}