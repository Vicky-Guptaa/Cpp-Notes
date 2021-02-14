#include<iostream>
using namespace std;

void Merge(int*arr1,int*arr2,int*arr3,int n1,int n2)
{
    int i=0;
    int j=0;
    int k=0;

    while(i<n1&&j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr3[k]=arr2[j];
        i++;j++;
    }
}

int main() {
    int n1;
    cout<<"Enter The Length Of The Array : ";
    cin>>n1;
    int *arr1=new int[n1];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter The Length Of The Array : ";
    cin>>n2;
    int *arr2=new int[n2];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int *arr3=new int[n1+n2];
    Merge(arr1,arr2,arr3,n1,n2);
    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}