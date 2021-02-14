#include<iostream>
using namespace std;

int First_Ocurence(int arr[],int n,int key,int i)
{
    if(i==n)
    {
        return -1;
    }
    if(key==arr[i])
    {
        return i;   
    }
    int check=First_Ocurence(arr,n,key,i+1);
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
    cout<<First_Ocurence(arr,n,key,0);
    return 0;
}