#include<iostream>
using namespace std;

int main() {
    int Year;
    cout<<"Enter Year : ";
    cin>>Year;
    
    if(Year%100==0)
    {
        if(Year%400==0)
        {
            cout<<Year<<" Is A Leap Year";
        }
        else
        {
            cout<<Year<<" Is Not A Leap Year";
        }
    }
    else 
    {
        if(Year%4==0)
        {
            cout<<Year<<" Is A Leap Year";
        }
        else
        {
            cout<<Year<<" Is Not A Leap Year";
        }
    }
    
    return 0;
}