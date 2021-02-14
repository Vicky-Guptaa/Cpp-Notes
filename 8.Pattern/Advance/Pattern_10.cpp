/*

Pattern Pascal Triangle

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
#include<iostream>
using namespace std;

int Factorial(int n);

int Pascal_Triangle(int n,int r);

int main() {
    int rows;
    cout<<"Enter The No Of Rows : ";
    cin>>rows;

    for(int i=rows;i>0;i--)
    {
        int k=0;
        for(int j=0;j<rows;j++)
        {
            if(j<i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<Pascal_Triangle(rows-i,k);
                cout<<" ";
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}

int Factorial(int n)
{
    int fact=1;
    
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }

    return fact;
}

int Pascal_Triangle(int n,int r)
{
    int a=Factorial(n)/(Factorial(n-r)*Factorial(r));
    return a;
}