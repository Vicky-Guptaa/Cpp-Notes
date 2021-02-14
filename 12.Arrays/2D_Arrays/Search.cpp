#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cin >> key;

    int r = 0, c = m - 1;
    bool flag=false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == key)
        {
            cout << r << " " << c << endl;
            flag=true;
            break;
        }
        else if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(flag==true)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element Not Found";
    }
    return 0;
}

/*_____________________________________Other Way Time Complexity - O(n)________________________________*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int key;
//     cin >> key;
//     int j = 0, start = 0, end = m, median;

//     while (j < n)
//     {
//         if (start < end)
//         {
//             median = (start + end + 1) / 2;
//             if (arr[j][median] == key)
//             {
//                 cout << j << " " << median;
//                 return 1;
//             }
//             else if (arr[j][median] < key)
//             {
//                 start = median;
//             }
//             else
//             {
//                 end = median;
//             }
//         }
//         else
//         {
//             j++;
//             start = 0;
//             end = m;
//         }
//     }
//     return 0;
// }

/*___________________________________________Time Complexity - O(n2)____________________________________*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n,m;
//     cin>>n>>m;

//     int arr[n][m];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     int key;
//     cin>>key;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(key==arr[i][j])
//             {
//                 cout<<i<<" "<<j;
//                 break;
//             }
//         }
//     }

//     return 0;
// }