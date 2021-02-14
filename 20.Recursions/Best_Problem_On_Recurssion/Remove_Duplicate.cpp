#include <iostream>
#include <string>
using namespace std;

string Duplicate_Remover(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    char ch=str[0];
    string ans=Duplicate_Remover(str.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    string str;
    cout << "Enter The String : ";
    getline(cin, str);

    cout<<Duplicate_Remover(str)<<endl;

    return 0;
}