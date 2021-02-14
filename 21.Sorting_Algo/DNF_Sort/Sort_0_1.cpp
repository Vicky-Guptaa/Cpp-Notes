#include <iostream>
using namespace std;

void Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void Sort(int arr[], int n)
{
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[i] > arr[j])
        {
            Swap(arr, i, j);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter The Size Of The Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Elements Of The Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}