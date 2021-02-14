#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Any Two Binary Number : "<<endl;
    cin >> a >> b;

    int x = 1;
    int carry = 0;
    int sum = 0;

    while (a > 0 || b > 0)
    {
        int rem1 = a % 10;
        int rem2 = b % 10;
        a/=10;
        b/=10;

        if (rem1 == 0 && rem2 == 0)
        {
            if (carry == 1)
            {
                sum += 1 * x;
                carry = 0;
            }
            else
            {
                sum += 0;
                carry = 0;
            }
        }
        else if ((rem1 == 1 && rem2 == 0) || (rem1 == 0 && rem2 == 1))
        {
            if (carry == 0)
            {
                sum += 1 * x;
                carry = 0;
            }
            else
            {
                sum += 0;
                carry = 1;
            }
        }
        else if (rem1 == 1 && rem2 == 1)
        {
            if (carry == 1)
            {
                sum += 1 * x;
                carry = 1;
            }
            else
            {
                sum += 0;
                carry = 1;
            }
        }
        x *= 10;
    }
    if (carry == 1)
    {
        sum += 1 * x;
    }

    cout << "Sum : " << sum;
    return 0;
}