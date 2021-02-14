#include<iostream>
using namespace std;

int main() {
    int Sum_upto;
    cout<<"The Sum Of Natural Number Upto : ";
    cin>>Sum_upto;
    int sum=0;
    for(int i=1;i<=Sum_upto;i++)
    {
        sum+=i;
    }
    cout<<"The Sum : "<<sum;
    return 0;
}