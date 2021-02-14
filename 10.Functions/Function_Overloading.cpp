#include<iostream>
using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}

float max(float a,float b)
{
    return a>b?a:b;
}

int max(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
int main() {
    cout<<max(10,5)<<endl;
    cout<<max(2.3f,10.5f)<<endl;
    cout<<max(10,15,20)<<endl;
    return 0;
}