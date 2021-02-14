#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    for (int rows = 0; rows < x; rows++)
    {
        if (arr[rows][y] == 1)
        {
            return false;
        }
    }
    int rows = x;
    int columns = y;

    while (rows >= 0 && columns >= 0)
    {
        if (arr[rows][columns] == 1)
        {
            return false;
        }
        rows--;
        columns--;
    }

    rows = x;
    columns = y;

    while (rows >= 0 && columns < n)
    {
        if (arr[rows][columns] == 1)
        {
            return false;
        }
        rows--;
        columns++;
    }
    return true;
}

bool N_Queens(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(arr, x, i, n))
        {
            arr[x][i] = 1;
            if (N_Queens(arr, x + 1, n))
            {
                return true;
            }

            arr[x][i] = 0; //backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter The Side Of The Chess Board : ";
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (N_Queens(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Empty";
    }

    return 0;
}