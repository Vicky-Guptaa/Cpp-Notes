/*
Pattern 

*****
*   *
*   *
*   *
*****

*/
#include<iostream>
using namespace std;

int main() {
    int rows,columns;
    cout<<"Enter No Of Rows And Columns : "<<endl;
    cin>>rows>>columns;
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(j==0||i==0||i==rows-1||j==columns-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}