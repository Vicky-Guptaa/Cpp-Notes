#include<iostream>
#include<string>
using namespace std;

char Alphabets[27]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void Encodings(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    if(str.length()<0)
    {
        return;
    }
    int i=str[0]-'0';
    if(i>0)
    {
    Encodings(str.substr(1),ans+Alphabets[i]);
    
    
    if(str.length()>1)
    {
    int n=stoi(str.substr(0,2));
    if(n<=26)
    {
    Encodings(str.substr(2),ans+Alphabets[n]);
    }
    }
    }
}

int main() {
    Encodings("303","");
    return 0;
}