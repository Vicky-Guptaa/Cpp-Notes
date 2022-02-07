#include <iostream>
using namespace std;

int Partition(int *Arr, int low, int high)
{
    int pivot = Arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (Arr[i] <= pivot)
        {
            i++;
        }
        while (Arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    } while (i < j);
    int temp = Arr[low];
    Arr[low] = Arr[j];
    Arr[j] = temp;
    return j;
}

void Quick_Sort(int *Arr, int low, int high)
{
    if (low < high)
    {
        int PartitionIndex = Partition(Arr, low, high);
        Quick_Sort(Arr, low, PartitionIndex - 1);  // sort left subarry
        Quick_Sort(Arr, PartitionIndex + 1, high); // sort right subarray
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