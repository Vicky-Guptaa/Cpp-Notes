#include<iostream>
using namespace std;

int main() {
    int number_1,number_2;
    cout<<"Enter The Two Numbers : "<<endl;
    cin>>number_1>>number_2;

    if(number_1>number_2)
    {
        cout<<number_1<<" Is Greater Than "<<number_2;
    }
    else
    {
        cout<<number_2<<" Is Greater Than "<<number_1;
    }
    
    return 0;
}