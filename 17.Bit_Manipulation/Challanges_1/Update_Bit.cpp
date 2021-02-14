// Clear Bit And Set Bit Combo

#include<iostream>
using namespace std;

int Update_Bit(int num,int value,int pos)
{
    int mask=(~(1<<pos));
    num=num & mask;
    return (num|(value<<pos));

}

int main() {
    int n,i,u;
    cout<<"Enter Any Number : ";
    cin>>n;
    cout<<"Update The Bit With [0/1] : ";
    cin>>u;
    cout<<"Enter The Set Bit Position : ";
    cin>>i;

    cout<<Update_Bit(n,u,i);

    return 0;
}