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
    
    return Count_Path(a-1,b)+Count_Path(a,b-1);

}

int main() {
    int ml,mb;
    cout<<"Enter The Length And Breadth Of The Maze : ";
    cin>>ml>>mb;
    cout<<Count_Path(ml,mb)<<endl;
    return 0;
}