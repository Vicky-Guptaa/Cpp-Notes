/*

Pattern 

123456
12345
1234
123
12
1

*/
#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter No Of Rows : ";
    cin>>rows;

    for(int i=rows;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}