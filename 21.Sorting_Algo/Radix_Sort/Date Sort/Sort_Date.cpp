#include<iostream>
using namespace std;

void Count_Sort(int arr[],int n,int exp,int mod,int range)
{
    int ans[n];
    int farr[range]={0};
    
    for(int i=0;i<n;i++)
    {
        int idx=(arr[i]/exp)%mod;
        farr[idx]++;
    }

    for(int i=1;i<range;i++)
    {
        farr[i]+=farr[i-1];
    }

    for(int i=n-1;i>=0;i--)
    {
        int value=(arr[i]/exp)%mod;
        int pos=farr[value]-1;
        ans[pos]=arr[i];
        farr[value]--;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
}

void Sort_Date(int arr[],int n)
{
    Count_Sort(arr,n,1000000,100,32);
    Count_Sort(arr,n,10000,100,13);
    Count_Sort(arr,n,1,10000,2501);

}

int main() {
    int n;
    cout<<"Enter The Number Of Elements In The Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Sort_Date(arr,n);
    cout<<"The Sorted Dates : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}