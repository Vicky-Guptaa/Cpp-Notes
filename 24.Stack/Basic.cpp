#include<iostream>
using namespace std;

#define n 10

class stack
{
    int *arr;
    int top;
    public:

    stack()
    {
        arr=new int[n];
        top=-1;
    }
    
    void push(int val)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Is Empty"<<endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"Stack Is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return (top==-1)?true:false;
    }
};

int main() {
    stack st;
    (st.empty())?cout<<"Empty"<<endl:cout<<"Non Empty"<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    (st.empty())?cout<<"Empty"<<endl:cout<<"Non Empty"<<endl;
    cout<<st.Top()<<endl;
    st.pop();



    return 0;
}