#include <iostream>
using namespace std;

int First_Occurence(int arr[], int key, int n, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }

    return (First_Occurence(arr, key, n, i + 1));
}

int Last_Occurence(int arr[], int key, int n, int i)
{
    if (i == n)
    {
        return -1;
    }
    int RestArray=Last_Occurence(arr,key,n,i+1);
    if(RestArray!=-1)
    {
        return RestArray;
    }
    if(key==arr[i])
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Length Of The Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Element Of The Array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter The Number To Find : ";
    cin >> key;
    int fo = First_Occurence(arr, key, n, 0);
    (fo == -1) ? cout << "Number Is Not Present " : cout << "First Occurence At : " << fo<<endl;

    int lo = Last_Occurence(arr, key, n, 0);

    (lo == -1) ? cout << "Number Is Not Present " : cout << "Last Occurence At : " << lo<<endl;

    return 0;
}