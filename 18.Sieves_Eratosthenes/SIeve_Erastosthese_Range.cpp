#include <iostream>
using namespace std;

void Sieve_Eratosthese(int s, int e)
{
    int Arr[e] = {0};
    if(s<2)
    {
        s=2;
    }
    for (int i = 2; i <= e; i++)
    {
        if (Arr[i] == 0)
        {
            for (int j = i * i; j <= e; j += i)
            {
                Arr[j] = 1;
            }
        }
    }
    for (int i = s; i <= e; i++)
    {
        if (Arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int s, e;
    cout << "Enter The Range :  \n";
    cin >> s >> e;

    Sieve_Eratosthese(s, e);

    return 0;
}