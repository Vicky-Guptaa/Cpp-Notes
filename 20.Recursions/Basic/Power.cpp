#include<iostream>
using namespace std;

int Pow(int n,int p)
{
    if(p==0)
    {
        return 1;
    }

    return (n*Pow(n,p-1));
}

int main() {
    int n,p;
    cout<<"Enter The Number And The Power To Be Raised : ";
    cin>>n>>p;

    cout<<Pow(n,p);
    return 0;
}