#include <iostream>
using namespace std;

void Count_Sort(int arr[],int n, int Min,int Max,int ans[])
{
    int range=Max-Min+1;
    int farr[range]={0};
    for(int i=0;i<n;i++)
    {
        int index=arr[i]-Min;
        farr[index]++;
    }

    for(int i=1;i<range;i++)
    {
        farr[i]=farr[i-1]+farr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        int value=arr[i];
        int idx=arr[i]-Min;
        int pos=farr[idx]-1;
        ans[pos]=value;
        farr[idx]--;
    }

}

int main()
{
    int n;
    cout << "Enter The Size Of The Array : ";
    cin >> n;
    cout << "Enter The Elements Of The Array : ";
    int arr[n];
    int Max = INT_MIN;
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Max = max(arr[i], Max);
        Min = min(arr[i], Min);
    }
    int ans[n];
    Count_Sort(arr,n,Min,Max,ans);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}