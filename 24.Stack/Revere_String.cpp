#include<iostream>
#include<stack>
using namespace std;

void String_Reverse(string str)
{
    stack<string>st;
    string word="";
    for(int i=0;i<=str.length();i++)
    {
        word=word+str[i];
        if(str[i]==' '||str[i]=='\0')
        {
            st.push(word);
            word="";
        }
    }
    while(st.empty()!=1)
    {
        cout<<st.top()<<" "; 
        st.pop();
    }
}

int main() {
    string str="Hey, How Are You Doing?";
    String_Reverse(str);
    return 0;
}