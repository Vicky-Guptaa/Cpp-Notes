#include<iostream>
using namespace std;

string KeyArr[10]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

void Keypad(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    int n=str[0]-'0';
    string code=KeyArr[n];
    for(int i=0;i<code.length();i++)
    {
        char ch=code[i];
        Keypad(str.substr(1),ans+ch);
    }
}

int main() {

     Keypad("12","");    
    return 0;
}