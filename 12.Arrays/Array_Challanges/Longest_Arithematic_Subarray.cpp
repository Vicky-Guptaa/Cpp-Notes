#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p=arr[1]-arr[0];
    int count=2,j=2,ans=2;

    while(j<n)
    {
        if(p==arr[j]-arr[j-1])
        {
            count++;
        }
        else
        {
            count=2;
            p=arr[j]-arr[j-1];
        }
        ans=max(count,ans);
        j++;
    }

    cout<<ans;
    return 0;
}