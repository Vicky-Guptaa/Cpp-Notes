#include<iostream>
using namespace std;

int Last_Occurence(int arr[],int n,int key,int i)
{
    if(i==n)
    {
        return -1;
    }
    int check=Last_Occurence(arr,n,key,i+1);
    if(key==arr[i]&&check==-1)
    {
        return i;
    }
    return check;

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
    cout<<Last_Occurence(arr,n,key,0);
    return 0;
}