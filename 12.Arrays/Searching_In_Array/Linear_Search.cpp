#include<iostream>
using namespace std;

int Linear_Search(int array[],int n,int key);

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

    cout<<Linear_Search(arr,n,key);

    return 0;
}

int Linear_Search(int array[],int n,int key)
{

    for(int i=0;i<n;i++)
    {
        if(key==array[i])
        {
            return i;
        }
    }
    return -1;
}