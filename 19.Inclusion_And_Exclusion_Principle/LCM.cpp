#include<iostream>
using namespace std;

int LCM(int a,int b)
{

    int product=a*b;
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }

    return product/a;

}

int main() {
    int n_1,n_2;
    cout<<"Enter Any Two Number : ";
    cin>>n_1>>n_2;
    
    cout<<LCM(n_1,n_2);

    return 0;
}