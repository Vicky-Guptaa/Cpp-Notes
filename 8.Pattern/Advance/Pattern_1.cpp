/*

Pattern Diamond

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter The No Of Rows : ";
    cin >> rows;

    for (int i = 1; i <=rows*2 ; i++)
    {
        for (int j = 1; j <=rows * 2 - 1; j++)
        {
            if (i <= rows)
            {
                if (j >= rows - i+1 && j <= rows + i-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if(j>=i-rows&&j<=3*rows-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }
        }
        cout << endl;
    }
    return 0;
}