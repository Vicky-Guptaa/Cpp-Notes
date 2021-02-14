#include<iostream>
using namespace std;

void Increasing(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }

    Increasing(n-1);
    cout<<n<<" ";
} 

void Decreasing(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }

    cout<<n<<" ";
    Decreasing(n-1);
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;
    
    Decreasing(n);
    Increasing(n);

    return 0;
}