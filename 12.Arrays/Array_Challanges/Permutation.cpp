#include<iostream>
#include<set>
using namespace std;

long long int Factorial(int n)
{
    long long int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

void Permutation(string str,long long int fact)
{
    set<string>oset;
    string ans;
    for(int i=0;i<fact;i++)
    {
        int temp=i;
        string tempstr=str;
        ans="";
        for(int j=str.length();j>0;j--)
        {
            int que=temp/j;
            int rem=temp%j;
            ans+=tempstr[rem];
            tempstr.erase(rem,1);
            temp=que;
        }
        oset.insert(ans);
    }
    for(auto x:oset)
    {
        cout<<x<<" ";
    }

}

int main(){
    string str;
    cin>>str;
    int n=str.length();

    long long int fact=Factorial(n);

    Permutation(str,fact);
    return 0;
}