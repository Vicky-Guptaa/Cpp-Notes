/*

Pattern 

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter The No Of Rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
        int k=1;
        for(int j=1;j<=rows;j++)
        {
            if(j<=rows-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<k;
                cout<<" ";
                k++;
            }
            
        }
        cout<<endl;
    }
    return 0;
}