#include <iostream>
using namespace std;

void Merge(int *Arr, int i, int mid, int n)
{
    int n1 = mid-i + 1;
    int n2 = n - mid;
    int arr1[n1];
    int arr2[n2];

    for (int j = 0; j < n1; j++)
    {
        arr1[j] = Arr[i + j];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = Arr[mid + 1 + j];
    }
    int x = 0, y = 0, z = i;
    while (x < n1 && y < n2)
    {
        if (arr1[x] < arr2[y])
        {
            Arr[z] = arr1[x];
            z++;
            x++;
        }
        else
        {
            Arr[z] = arr2[y];
            z++;
            y++;
        }
    }
    while (x < n1)
    {
        Arr[z] = arr1[x];
        z++;
        x++;
    }
    while (y < n2)
    {
        Arr[z] = arr2[y];
        z++;
        y++;
    }
}

void Merge_Sort(int *Arr, int i, int n)
{
    if (i < n)
    {
        int mid = (i + n) / 2;
        Merge_Sort(Arr, i, mid);
        Merge_Sort(Arr, mid + 1, n);
        Merge(Arr, i, mid, n);
    }
}
int main()
{
    int n;
    cout << "Enter The Length Of The Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter The Elements Of The Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Merge_Sort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}