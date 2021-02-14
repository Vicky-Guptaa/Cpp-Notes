#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Length Of The Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Element Of The Array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<"Xor Of All The Subsequence Of The Array Is : "<<arr[0];
    }
    else
    {
         cout<<"Xor Of All The Subsequence Of The Array Is : "<<"0";
    }

    return 0;
}