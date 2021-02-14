#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    arr[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0, Max;

    Max = INT_MIN;
    
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for (int i = 0; i < n ; i++)
    {
        if (Max < arr[i]&&arr[i] > arr[i+1])
        {
            count++;
        }
        Max=max(Max,arr[i]);
    }

    cout << count;
    return 0;
}