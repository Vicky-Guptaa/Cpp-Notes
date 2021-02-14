#include<iostream>
using namespace std;

class Your;
class My 
{
    int a;
    protected: int b;
    public: int c;
    friend Your;
};

class Your
{
    public:
    My m;
    void fun()
    {
    m.a=10;
    m.b=12;
    m.c=22;
    }
};

int main() {
    Your m; 
    return 0;
}