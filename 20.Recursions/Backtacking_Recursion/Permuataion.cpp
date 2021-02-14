//        subset with permutation will give the best combo of password list for bruteforce 

#include <iostream>
using namespace std;

string str[6]={"indu","12345","@"};

void Swap(int i, int j)
{
    string temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void Permute(int n, int i)
{
    if (i == n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<str[j];
        }
        cout<<endl;
        return;
    }
    for (int j = i; j < n; j++)
    {
        Swap(j, i);
        Permute(n, i + 1);
        Swap(j, i);
    }
}

int main()
{

    Permute(3, 0);
    
    return 0;
}