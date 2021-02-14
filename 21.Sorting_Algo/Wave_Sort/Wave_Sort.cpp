#include<iostream>
using namespace std;

void Swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void Wave_Sort(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]>arr[i-1])
        {
            Swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<n-1)
        {
            Swap(arr,i,i+1);
        }
    }
}

int main() {
    int n;
    cout<<"Enter The Size Of The Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element Of The Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Wave_Sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}