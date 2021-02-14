#include <iostream>
using namespace std;

int GetBit(int n, int i)
{
    int mask = (1 << i);
    return ((n & mask) != 0);
}

int SetBit(int n, int i)
{
    int mask = (1 << i);
    return (n | mask);
}

int Unique(int arr[], int n)
{
    int result = 0;

    for (int i = 0; i < 64; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if (GetBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = SetBit(result, i);
        }
    }
    return result;
}

int main()
{
    int num;
    cout << "Length Of The Number : ";
    cin >> num;
    int arr[num];
    cout << "Enter The Element Of The Array : ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[num];
    }
    cout << Unique(arr, num);

    return 0;
}