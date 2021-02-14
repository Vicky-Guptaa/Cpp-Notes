#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rs=0,re=m-1;
    int cs=0,ce=n-1;

    while((rs<=re)&&(cs<=ce))
    {
        for(int rows=rs;rows<=re;rows++)
        {
            cout<<arr[cs][rows]<<" ";
        }
        cs++;

        for(int column=cs;column<=ce;column++)
        {
            cout<<arr[column][re]<<" ";
        }
        re--;

        for(int rows=re;rows>=rs;rows--)
        {
            cout<<arr[ce][rows]<<" ";
        }
        ce--;
           

        for(int column=ce;column>=cs;column--)
        {
            cout<<arr[column][rs]<<" ";
        }
        rs++;

    }
        cout<<endl<<rs<<cs<<re<<ce;
    return 0;
}