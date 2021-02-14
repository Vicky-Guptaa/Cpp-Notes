#include<iostream>
using namespace std;

int Sum(int num)
{
    if(num==0)
    {
        return 0;
    }

    int sum= num + Sum(num-1);

    return sum;

}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    cout<<Sum(n);
    return 0;
}