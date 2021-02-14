#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin.ignore();
    cin.getline(arr, n + 1);
    int count = 0, Max = INT_MIN;
    int start = 0, end;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ' ' && arr[i] != '\0')
        {
            count++;
        }
        else 
        {
            count = 0;
        }
        if (Max < count)
        {
            Max = count;
            start = i;
        }
    }
    cout << Max << endl;
    start++;

    for (int i = 0; i < Max; i++)
    {
        cout << arr[start - Max + i];
    }

    return 0;
}