#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Length Of The Array  : \n";
    cin>>n;

    int arr[n];
    cout<<"Enter The Element Of The Array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Subset Are : \n";
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}