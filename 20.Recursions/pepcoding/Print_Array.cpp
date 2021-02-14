#include<iostream>
using namespace std;

void Print(int arr[],int n)
{
    static int i=0;
    if(i==n)
    {
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    Print(arr,n);
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
    Print(arr,n);
    return 0;
}