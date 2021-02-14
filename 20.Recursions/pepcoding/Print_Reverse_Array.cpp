#include<iostream>
using namespace std;

void Print(int arr[],int n,int i)
{
    if(i==n)
    {
        return;
    }
    
    Print(arr,n,i+1);
    cout<<arr[i]<<" ";
    
}

int main() {
    int n;
    cout<<"Enter The Length Of The Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Print(arr,n,0);
    return 0;
}