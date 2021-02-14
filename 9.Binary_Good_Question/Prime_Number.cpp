#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter Any Number : ";
    cin >> num;
    int j,count;
    for (j = 2; j * j <= num; j++)
    {
        if (num % j == 0)
        {
            count=1;
            break;
        }
    }

    if (count==1||num==0||num==1)
    {
        cout << "The Number Is Not Prime";
    }
    else 
    {
        cout << "The Number Is Prime";
    }
    
    return 0;
}