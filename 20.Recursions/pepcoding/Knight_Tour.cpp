#include <iostream>
using namespace std;

void Display(int **Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

void Knight_Tour(int **Arr, int n, int i, int j, int move)
{
    if (i < 0 || i >= n || j < 0 || j >= n || Arr[i][j] > 0)
    {
        return;
    }
    if (move == n * n)
    {
        Arr[i][j] = move;
        Display(Arr, n);
        Arr[i][j] = 0;
        return;
    }
    else
    {
        Arr[i][j] = move;
        Knight_Tour(Arr, n, i - 2, j + 1, move + 1);
        Knight_Tour(Arr, n, i - 1, j + 2, move + 1);
        Knight_Tour(Arr, n, i + 1, j + 2, move + 1);
        Knight_Tour(Arr, n, i + 2, j + 1, move + 1);
        Knight_Tour(Arr, n, i + 2, j - 1, move + 1);
        Knight_Tour(Arr, n, i + 1, j - 2, move + 1);
        Knight_Tour(Arr, n, i - 1, j - 2, move + 1);
        Knight_Tour(Arr, n, i - 2, j - 1, move + 1);
        Arr[i][j] = 0;
    }
}

int main()
{
    int n;
    cout << "Enter The Length Of The Array : ";
    cin >> n;
    int **Arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        Arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            Arr[i][j] = 0;
        }
    }
    int r, c;
    cout << "Enter The Position Of The Knight : \n";
    cin >> r >> c;

    Knight_Tour(Arr, n, r, c, 1);
    return 0;
}