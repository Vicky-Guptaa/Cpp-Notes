/*

Pattern Hollow Rhombus 

     ******
    *    *
   *    *
  *    *
 *    *
******

*/
#include<iostream>
using namespace std;

int main() {
    int side;
    cout<<"Enter The Side Of Rhombus : ";
    cin>>side;

    for(int i=side;i>0;i--)
    {
        for(int j=1;j<side+i;j++)
        {
            if((i==side&&j>=side)||i==1||j==i||j==side+i-1)
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