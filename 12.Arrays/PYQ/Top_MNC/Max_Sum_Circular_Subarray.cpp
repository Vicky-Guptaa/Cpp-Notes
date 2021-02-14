#include<iostream>
using namespace std;

int Kadane_Algo(int arr[],int n);

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int nonwrapsum=Kadane_Algo(arr,n);
    int sum=0;
    for(int i=0;i<n;i++)
    {  
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapsum=sum+Kadane_Algo(arr,n);

    int Max=INT_MIN;
    Max=max(wrapsum,nonwrapsum);
    cout<<Max;
    return 0;
}

int Kadane_Algo(int arr[],int n)
{
    int sum=0,Max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        Max=max(Max,sum);
    }
    return Max;
}