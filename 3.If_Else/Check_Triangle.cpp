#include<iostream>
using namespace std;

int main() {
    int side_1,side_2,side_3;
    cout<<"Enter The Sides Of The Triangle : "<<endl;
    cin>>side_1>>side_2>>side_3;

    if(side_1==side_2&&side_2==side_3)
    {
        cout<<"Equilateral Triangle";
    }
    else if(side_2==side_1||side_3==side_2||side_3==side_1)
    {
        cout<<"Isosceles Triangle";
    }
    else
    {
        cout<<"Scalene Triangle";
    }
    

    return 0;
}