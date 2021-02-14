/*

Pattern

******
*****
****
***
**
*

*/
#include<iostream>
using namespace std;

int main() {

    int rows,columns;
    cout<<"Enter The No Of Rows : "<<endl;
    cin>>rows;

    for(int i=rows;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}