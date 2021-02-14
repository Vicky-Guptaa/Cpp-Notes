#include<iostream>
using namespace std;

int main() {
    int number;
    int sum=0;
    cout<<"Enter Any Number : ";
    cin>>number;

    while (number>=0)
    {
        sum=sum+number;
        cout<<"Enter Any Number : ";
        cin>>number;

    }

    cout<<"The Sum Is : "<<sum;
    
    return 0;
}