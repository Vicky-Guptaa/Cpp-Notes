#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int Max_No=INT_MIN;
    for(int i=0;i<n;i++)
    {
        Max_No=max(Max_No,array[i]);
    }
    
    cout<<Max_No;
    return 0;
}