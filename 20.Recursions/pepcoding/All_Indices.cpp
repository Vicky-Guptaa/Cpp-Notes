#include<iostream>
using namespace std;

void All_Indices(int arr[],int n,int key,int i)
{
    static int m=0;
    if(i==n)
    {
        return;
    }
    if(key==arr[i])
    {
        cout<<i<<" ";
    }
    All_Indices(arr,n,key,i+1);
}
int main() {
    int n;
    cout<<"Enter The Length Of The Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter The Key : ";
    cin>>key;
    All_Indices(arr,n,key,0);
    return 0;
}