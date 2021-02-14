#include<iostream>
using namespace std;

int main() {
        int number_1,number_2,number_3;
    cout<<"Enter The Three Numbers : "<<endl;
    cin>>number_1>>number_2>>number_3;

    if(number_1>number_2)
    {
        if(number_1>number_3)
        {
            cout<<number_1<<" Is Greater Than "<<number_2<<" And "<<number_3;
        }
        else
        {
             cout<<number_3<<" Is Greater Than "<<number_1<<" And "<<number_2;
        }
        
    }
    else
    {
        if(number_2>number_3)
        {
             cout<<number_2<<" Is Greater Than "<<number_1<<" And "<<number_3;
        }
        else
        {
             cout<<number_3<<" Is Greater Than "<<number_1<<" And "<<number_2;
        }
        
    }
    return 0;
}