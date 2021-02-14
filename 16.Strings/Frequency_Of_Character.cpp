#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str;
    getline(cin,str);

    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }

    transform(str.begin(),str.end(),str.begin(), ::toupper);

    for(int i=0;i<str.size();i++)
    {
        arr[str[i]-65]++;
    }
     
    int Max=INT_MIN,n;
    for(int i=0;i<26;i++)
    {
        if(Max<arr[i])
        {
            n=i;
            Max=arr[i];
        }
    }

    char c=n+65;

    cout<<Max<<" "<<c;
    return 0;
}