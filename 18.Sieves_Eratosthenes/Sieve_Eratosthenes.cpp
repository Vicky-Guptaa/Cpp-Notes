#include <iostream>
using namespace std;

void SievePrime(int n)
{
    int Prime[n+1] = {0};

    for (int i = 2; i <= n+1; i++)
    {
        if (Prime[i] == 0)
        {
            for (int j = i * i; j <= n+1; j += i)
            {
                Prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n+1; i++)
    {
        if (Prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter The Starting And Ending Number : ";
    cin >> n;

    SievePrime(n);
    return 0;
}