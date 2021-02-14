#include<iostream>
using namespace std;

int Max_Of_Array(int arr[],int n,int i)
{
    if(i==n)
    {
        return arr[n-1];
    }
    int Max=Max_Of_Array(arr,n,i+1);
    if(Max>arr[i])
    {
        return Max;
    }
    else
    {
        return arr[i];
    }
    
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
    cout<<Max_Of_Array(arr,n,0);
    return 0;
}