/*

Pattern Floyds Triangle  

1
2  3
4  5  6
7  8  9  10

*/
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter No Of Rows : ";
    cin>>rows;
    int k=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            k++;
            cout<<k<<"  ";
        }
        cout<<endl;
    }
    return 0;
}