#include <iostream>
using namespace std;

void Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int Partition_Index(int arr[], int low, int high)
{
    int Pivot = arr[high];
    int x = low - 1;

    for (int i = low; i < high; i++)
    {
        if (arr[i] < Pivot)
        {
            x++;
            Swap(arr, i, x);
        }
    }
    Swap(arr, x + 1, high);
    return x + 1;
}

int Quick_Select(int arr[], int low, int high, int Kth)
{
    int Partition=Partition_Index(arr,low,high);

    if(Kth<Partition)
    {
       return Quick_Select(arr,low,Partition+1,Kth);
    }
    else if(Kth>Partition)
    {
       return Quick_Select(arr,Partition+1,high,Kth); 
    }
    else
    {
        return arr[high];
    }
}


int main()
{
    int n;
    cout << "Enter The Length Of The Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter The Elements Of The Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Kth;
    cout << "Enter The Kth Smallest Number You Want : ";
    cin >> Kth;
    int Ans=Quick_Select(arr,0,n,Kth-1);
    (Ans==-1)?cout<<"Invalid Input"<<endl:cout<<Ans<<endl;

    return 0;
}