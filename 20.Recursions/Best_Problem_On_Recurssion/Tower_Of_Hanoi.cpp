#include<iostream>
using namespace std;

void Tower_Of_Hanoi(int n,char Beg,char Aux,char End)
{
    if(n==0)
    {
        return;
    }
    
    Tower_Of_Hanoi(n-1,Beg,End,Aux);
    cout<<"Move From "<<Beg<<" To "<<End<<endl;
    Tower_Of_Hanoi(n-1,Aux,Beg,End);
}

int main() {
    int n;
    cout<<"Enter The No Of Disc : ";
    cin>>n;

    Tower_Of_Hanoi(n,'A','B','C');
    return 0;
}