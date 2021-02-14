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
    int code=ch;
    string ros=str.substr(1);

    Substring(ros,ans);
    Substring(ros,ans+ch);
    Substring(ros,ans+to_string(code));

}

int main() {
    string str;
    cout<<"Enter The String : ";
    getline(cin,str);

    Substring(str,"");
    return 0;
}