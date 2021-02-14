#include <iostream>
using namespace std;

void Target_Sum(int arr[], int n, int sum, int i, string ans)
{

    if (n == i)
    {
        if (sum == 0)
        {
            cout << ans << endl;
        }
        return;
    }
    if (arr[i] > sum)
    {
        return Target_Sum(arr, n, sum, i + 1, ans);
    }

    Target_Sum(arr, n, sum - arr[i], i + 1, ans + to_string(arr[i]) + " ");
    Target_Sum(arr, n, sum, i + 1, ans);
}

int main()
{
    int n;
    cout << "Enter The Length Of The Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Element Of The Array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter The Target Sum : ";
    cin >> sum;

    Target_Sum(arr, n, sum, 0, "");
    return 0;
}