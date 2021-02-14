#include<iostream>
using namespace std;

class rectangle
{
    public:
    int l,b;
    int Area()
    {
        return l*b;
    }
    int Perimeter()
    {
        return 2*(l+b);
    }
};

int main() {
    rectangle *p;
    p=new rectangle;
    
    //other way

    rectangle *q=new rectangle;

    (*q).l=10;
    (*q).b=5;
    cout<<q->Area();
    return 0;
}