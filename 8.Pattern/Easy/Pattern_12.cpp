/*

Pattern

      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4

*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter No Of Rows : ";
    cin >> rows;

    for (int i = rows; i >0; i--)
    {
        int k=rows+1-i;
        int m=2;

        for (int j = 1; j <= rows * 2 - i; j++)
        {
            if(j<=rows)
            {
                if(j>=rows-k+1)
                {
                    cout<<k;
                    k--;
                }
                else
                {
                    cout<<" ";
                } 
                
            }
            else
            {
                cout<<m;
                m++;
                
            }
            cout<<" ";
        }
                    
            cout << endl;
    }
    return 0;
}