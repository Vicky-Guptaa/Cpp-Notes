//______________________________________Time Complexity O(n)_______________________________
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Length Of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Element Of An Array : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pro = arr[0];
    for (int i = 1; i < n; i++)
    {
        pro ^= arr[i];
    }
    cout << "The Unique Number : " << pro;
    return 0;
}