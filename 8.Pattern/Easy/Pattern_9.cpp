/*

Pattern

55555
4444
333
22
1

*/
#include<iostream>
using namespace std;

int main() {
        int rows;
    cout<<"Enter No Of Rows : ";
    cin>>rows;
    int k=0;

    for(int i=rows;i>0;i--)
    {
        k++;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}