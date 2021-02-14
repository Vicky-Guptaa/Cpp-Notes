#include<iostream>
using namespace std;

int Count_Path(int a,int b)
{
    if(a==1&&b==1)
    {
        return 1;
    }
    if(a<1||b<1)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<=3;i++)
    {
        count=count+Count_Path(a-i,b)+Count_Path(a,b-i)+Count_Path(a-i,b-i);
    }
    return count;
}

int main() {
    int a,b;
    cout<<"Enter The Length And Breadth Of The Maze : ";
    cin>>a>>b;
    cout<<Count_Path(a,b)<<endl;
    return 0;
}