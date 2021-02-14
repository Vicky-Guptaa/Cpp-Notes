#include <iostream>
using namespace std;

int Binary(int array[], int key, int n);

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Search For Number : ";

    cin >> key;

    cout << Binary(array, key, n);
    return 0;
}

int Binary(int array[], int key, int n)
{
    int Start = 0, End = n, Median;

    while(Start<=End)
    {
        Median = (Start + End) / 2;

        if (key == array[Median])
        {
            return Median;
        }
        else if (key>array[Median])
        {
            Start = Median++;

            
        }
        else if(key<array[Median])
        {
            End = Median--;
        }
    }
    return -1;
}