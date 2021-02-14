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
    
    int Max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        Max=max(arr[i],Max);
        cout<<Max<<" ";
    }
    return 0;
}