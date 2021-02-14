#include <iostream>
using namespace std;

class rectangle
{
public:
    int l;
    int b;
    int Area()
    {
        return l * b;
    }
    int Perimeter()
    {
        return (2 * (l + b));
    }
};

int main()
{
    rectangle r1,r2;
    r1.l=10;
    r1.b=5;
    r2.l=9;
    r2.b=7;
    cout<<"The Area Of First Rectngle : "<<r1.Area()<<endl<<"The Perimeter Of First Rectangle : "<<r1.Perimeter()<<endl;
    cout<<"The Area Of Second Rectngle : "<<r2.Area()<<endl<<"The Perimeter Of Second Rectangle : "<<r2.Perimeter()<<endl;

    return 0;
}