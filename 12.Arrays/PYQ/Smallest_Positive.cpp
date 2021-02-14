#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int N=1e6+2;
    char str[N];
    for(int i=0;i<N;i++)
    {
        str[i]='F';
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            str[arr[i]]='T';
        }
    }

    for(int i=0;i<N;i++)
    {
        if(str[i]=='F')
        {
            cout<<i;
            break;
        }
    }
    return 0;
}