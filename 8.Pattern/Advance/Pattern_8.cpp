/*

Pattern Solid Butterfly

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter The No Of Rows : ";
    cin>>rows;

    for(int i=0;i<rows*2;i++)
    {
        for(int j=0;j<rows*2;j++)
        {
            if(i<rows)
            {
                if(j>i&&j<rows*2-i-1)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"*";
                }
            }
            else
            {
                if(j<rows*2-i||j>=i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}