#include<iostream>
using namespace std;

int Pair(int n)
{
    if(n==0||n==1||n==2)
    {
        return n;
    }

    return Pair(n-1)+Pair(n-2)*(n-1);
}

int main() {
    int n;
    cout<<"Enter The Number Of Friends : ";
    cin>>n;
    cout<<Pair(n)<<endl;
    return 0;
}