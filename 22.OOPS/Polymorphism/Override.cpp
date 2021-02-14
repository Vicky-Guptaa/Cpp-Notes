#include<iostream>
using namespace std;

class base 
{
    public:
    void fun()
    {
        cout<<"Base Of Fun";
    }
};
class derived : public base
{
    public:
    void fun()
    {
        cout<<"Derived Of Fun";
    }
};

int main() {
    derived a;
    a.fun();  
    return 0;
}