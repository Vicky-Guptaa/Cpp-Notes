#include<iostream>
using namespace std;

int main() {

int n;
cin>>n;
char name[n];
cin>>name;
bool flag=true;
for(int i=0;i<n;i++)
{
    if(name[i]!=name[n-1-i])
    {
        flag=false;
    }
}
if(flag)
{
    cout<<"Palindrome";
}
else
{
    cout<<"Not A Pallindrome";
}

    return 0;
}