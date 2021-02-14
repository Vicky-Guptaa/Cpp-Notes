/*
Pattern 

*****
*****
*****
*****
*****

*/
#include<iostream>
using namespace std;

int main() {
    int rows,column;
    cout<<"Enter No Of Rows And Column : "<<endl;
    cin>>rows>>column;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}