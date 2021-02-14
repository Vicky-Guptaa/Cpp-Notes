#include<iostream>
using namespace std;

void Substring(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=str[0];
    string ros=str.substr(1);

    Substring(ros,ans);
    Substring(ros,ans+ch);
}

int main() {
    string str;
    cout<<"Enter The String : ";
    getline(cin,str);

    Substring(str,"");
    return 0;
}