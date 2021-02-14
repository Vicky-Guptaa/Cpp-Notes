/*

Pattern 

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter The No Of Rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j<=rows-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<i;
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}