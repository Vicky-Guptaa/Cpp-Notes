#include <iostream>
using namespace std;
bool visited[5][5] = {false};

void Rat_Maze(int Maze[5][5], int n, int i, int j)
{
    if (i < 0 || i == n || j < 0 || j == n || Maze[i][j]==1 || visited[i][j] == 1)
    {
        return;
    }
    if (i == n - 1 && j == n - 1)
    {
        visited[i][j]=true;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        }
        cout<<endl; 
                visited[i][j]=false;
        return;
    }
    visited[i][j]=true;
    Rat_Maze(Maze,n,i-1,j);
    Rat_Maze(Maze,n,i,j-1);
    Rat_Maze(Maze,n,i+1,j);
    Rat_Maze(Maze,n,i,j+1);
    visited[i][j]=false;
}
int main()
{
    int arr[5][5] = {

        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 1},
        {0, 0, 0, 0, 0},
    };

    Rat_Maze(arr, 5, 0, 0);

    return 0;
}