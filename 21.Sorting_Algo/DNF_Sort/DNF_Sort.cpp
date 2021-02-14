#include<iostream>
using namespace std;

void Swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void DNF_Sort(int arr[],int n)
{
    int i=0,j=0,k=n;
    while(j<=k)
    {
        if(arr[j]==0)
        {
            Swap(arr,i,j);
            j++;i++;
        }
        else if(arr[j]==2)
        {
            Swap(arr,j,k);
            k--;
        }
        else
        {
            j++;
        }
        
    }
}

int main() {
    int n;
    cout<<"Enter The Element Of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    DNF_Sort(arr,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}