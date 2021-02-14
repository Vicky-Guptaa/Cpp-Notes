#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Length Of The Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter The Element Of The Array : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pro = arr[0];
    for (int i = 1; i < n; i++)
    {
        pro = pro ^ arr[i];
    }
    
    int x=pro,count=0;

    while(x)
    {
        if(x&1==1)
        {
            break;
        }
        count++;
        x>>=1;
    }
    x=pro;
    for(int i=0;i<n;i++)
    {
        if((arr[i]>>count)&1==1)
        {
            x^=arr[i];
        }
    }

    pro=x^pro;

    cout<<"The Two Unique Number Are : "<<x<<" "<<pro;

    return 0;
}