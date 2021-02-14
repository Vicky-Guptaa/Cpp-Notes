#include<iostream>
using namespace std;

int Count_Path(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++)
    {
        count+=Count_Path(s+i,e);
    }
    return count;
}

int main() {
    int s,e;
    cout<<"Enter The Starting And Ending Point : ";
    cin>>s>>e;  

    cout<<Count_Path(s,e);
    return 0;
}