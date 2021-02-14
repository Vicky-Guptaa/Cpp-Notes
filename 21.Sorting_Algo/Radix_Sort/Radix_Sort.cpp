#include <iostream>
using namespace std;

void Count_Sort(int arr[], int n, int expo)
{
    int ans[n+1];
    int farr[10] = {0};
    for (int i = 0; i <=n; i++)
    {
        int idx = ((arr[i] / expo) % 10);
        farr[idx]++;
    }
    for (int i = 1; i < 10; i++)
    {
        farr[i] += farr[i - 1];
    }

    for (int i = n; i >= 0; i--)
    {
        int value=arr[i];
        int idx = (arr[i] / expo) % 10;
        int pos = farr[idx]-1;
        ans[pos] =value;
        farr[idx]--;
    }
    for(int i=0;i<=n;i++)
    {
        arr[i]=ans[i];
    }
}

void Radix_Sort(int arr[], int n, int Max)
{
    int expo = 1;
    while (expo <= Max)
    {
        Count_Sort(arr, n, expo);
        expo *= 10;
    }
}

int main()
{
    int n;
    cout << "Enter The Element Of The Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Elements Of The Array : ";
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Max = max(arr[i], Max);
    }

    Radix_Sort(arr, n - 1, Max);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}