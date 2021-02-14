#include<iostream>
using namespace std;

int Factorial(int n)
{
    static int k=0;
    if(n==1)
    {
        cout<<k<<endl;
        return 1;
    }
    k++;

    return n*Factorial(n-1);

}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    cout<<Factorial(n);

    return 0;
}