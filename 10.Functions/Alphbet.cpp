#include<iostream>
using namespace std;

void Check_Aplha(char c);

int main() {
    char c;
    cout<<"Press Any Key : ";
    cin>>c;

    Check_Aplha(c);

    return 0;
}

void Check_Aplha(char c)
{
    int a=c;
    if((a>=97&&a<=122)||(a>=65&&a<=90))
    {
        cout<<c<<" Is A Alphabet";
    }
    else
    {
        cout<<c<<" Is Not A Alphabet";    
    }
    
}