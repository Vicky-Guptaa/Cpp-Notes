// ________________________________________Time Complexity O(1)_________________________________________
#include <iostream>
using namespace std;

int ComputerXor(int n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << ComputerXor(n);

    return 0;
}

// ________________________________________Time Complexity O(n)_________________________________________
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter Any Number : ";
//     cin>>n;
//     int XOR=0;
//     for(int i=1;i<=n;i++)
//     {
//         XOR=(XOR^i);
//     }
//     cout<<XOR;
//     return 0;
// }