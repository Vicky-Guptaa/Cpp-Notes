#include<iostream>
using namespace std;

int algo(int arr[],int n,int key);

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;

    cout<<algo(arr,n,key);

    return 0;
}

int algo(int arr[],int n,int key)
{
        int start=0,end=n-1;

    while(start<end)
    {
         if(key>arr[start]+arr[end])
         {
             start++;
         }
         else if(key<arr[start]+arr[end])
         {
             end--;
         }
         else if(key==arr[end]+arr[start])
         {
             cout<<start<<" "<<end<<endl;
             return 1;
         }
    }
    return -1;
}