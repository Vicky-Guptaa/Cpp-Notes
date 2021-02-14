#include<iostream>
using namespace std;

// int Check(int arr[],int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }

//     bool RestArray=Check(arr+1,n-1);

//     return (arr[0]<arr[1]&&RestArray);
// }

int Check(int arr[],int n)
{
    if(n==1)
    {
        return 1;
    }
    if(arr[0]>arr[1])
    {
        return 0;
    }
    else
    {
        return (Check(arr+1,n-1));
    }
    
}
int main() {
    int n;
    cout<<"Length Of The Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element Of The Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(Check(arr,n))
    {
        cout<<"Array Is Sorted";
    }
    else
    {
        cout<<"Array Is Not Sorted";
    }
    
    return 0;
}