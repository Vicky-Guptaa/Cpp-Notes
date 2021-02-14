#include<iostream>
using namespace std;

long long Merge(int arr[],int i,int mid,int n)
{
    long long Inversion=0;
    int n1=mid-i+1;
    int n2=n-mid;
    int arr1[n1];
    int arr2[n2];

    for(int j=0;j<n1;j++)
    {
        arr1[j]=arr[i+j];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[mid+1+j];
    }

    int x=0,y=0,z=i;

    while(x<n1&&y<n2)
    {
        if(arr1[x]<arr2[y])
        {
            arr[z]=arr1[x];
            x++;
            z++;
        }
        else
        {
            arr[z]=arr2[y];
            y++;
            z++;
            Inversion+=n1-x; 
        }
    }
    while(x<n1)
    {
        arr[z]=arr1[x];
        x++;
        z++;
    }

    while(y<n2)
    {
        arr[z]=arr2[y];
        y++;
        z++;
    }
    return Inversion;
}

long long Merge_Sort(int arr[],int i,int n)
{
    long long Inversion=0;
    if(i<n)
    {
        int mid=(i+n)/2;
        Inversion+=Merge_Sort(arr,i,mid);
        Inversion+=Merge_Sort(arr,mid+1,n);
        
        Inversion+=Merge(arr,i,mid,n);
    }
    return Inversion;
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

    cout<<Merge_Sort(arr,0,n)<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}