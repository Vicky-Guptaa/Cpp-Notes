/*

Pattern 0-1

1
01
101
0101
10101
*/
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter No Of Rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
    return 0;
}