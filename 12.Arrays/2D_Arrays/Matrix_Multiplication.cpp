#include <iostream>
using namespace std;

int main()
{
    int l, n, m;
    cin >> l >> n >> m;

    int arr_1[l][n], arr_2[n][m];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr_1[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr_2[i][j];
        }
    }
    int ans[l][m];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int k=0;k<n;k++)
            {
                ans[i][j]+=arr_1[i][k]*arr_2[j][k];
            }
        }
    }
    cout<<endl;
        for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}