#include <iostream>
using namespace std;

void Swap(int *Arr, int i, int j)
{
    int temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
}

int Partition(int *Arr, int low, int high)
{
    int Pivot = Arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (Arr[j] < Pivot)
        {
            i++;
            Swap(Arr, i, j);
        }
    }
    Swap(Arr, i + 1, high);
    return i + 1;
}

void Quick_Sort(int *Arr, int low, int high)
{
    if (low < high)
    {
        int PartitionIndex = Partition(Arr, low, high);
        Quick_Sort(Arr, PartitionIndex + 1, high);
        Quick_Sort(Arr, low, PartitionIndex - 1);
    }
}

int main()
{
    int n;
    cout << "Enter The Length Of The Array : ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter The Element Of The Array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Quick_Sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}