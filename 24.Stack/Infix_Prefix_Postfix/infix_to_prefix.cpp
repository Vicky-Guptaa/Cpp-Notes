#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int Precedence(char c)
{
    if(c=='^')return 3;
    else if(c=='/'||c=='*')return 2;
    else if(c=='-'||c=='+')return 1;
    else return -1;
}

string Convert(string str)
{
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==')')str[i]='(';

        else if(str[i]=='(')str[i]=')';
        
    }
    string cnv;
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            cnv+=str[i];
        }
        else 
        {
            if(str[i]=='(')
            {
                st.push('(');
            }
            else if(str[i]==')')
            {
                while(!st.empty()&&st.top()!='(')
                {
                    cnv+=st.top();
                    st.pop();
                }
                if(!st.empty())st.pop();
            }
            else
            {
                while(!st.empty()&&Precedence(str[i])<=Precedence(st.top()))
                {
                    cnv+=st.top();
                    st.pop();
                }
                st.push(str[i]);
            }
        }
    }
    while(!st.empty())
    {
        cnv+=st.top();
        st.pop();
    }
    reverse(cnv.begin(),cnv.end());
    return cnv;
}

int main() {
    string str;
    cin>>str;
    cout<<Convert(str)<<endl;
    return 0;
}