#include<iostream>
#include<stack>
using namespace std;

void push_at_bottom(stack<int> &st,int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    int v=st.top();
    st.pop();
    push_at_bottom(st,val);
    st.push(v);
}

void Reverse_Stack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int val=st.top();
    st.pop();
    Reverse_Stack(st);
    push_at_bottom(st,val);
}

void Display(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main() {
    
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    Display(st);
    Reverse_Stack(st);
    Display(st);
    return 0;
}