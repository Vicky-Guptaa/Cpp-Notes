#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter Any Number : ";
    cin>>number;

    int i=2;
    for(i;i<number;i++)
    {
        if(number%i==0)
        {
            cout<<number<<" Is Not A Prime Number";
            break;
        }
    }
    
    if(number==i)
    {
        cout<<number<<" Is A Prime Number";
    }
    return 0;
}