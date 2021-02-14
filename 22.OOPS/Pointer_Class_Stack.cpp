#include<iostream>
using namespace std;

class rectangle
{
    public:
    int l;
    int b;
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
    rectangle r1;
    rectangle *r2;
    r2=&r1;
    
    // (*r2).l=10;
    // (*r2).b=5;
    r2->l=9;
    r2->b=7;
     
    cout<<"Area : "<<(r1).Area()<<endl;
    cout<<"Perimeter : "<<(r1).Perimeter()<<endl;
    cout<<sizeof(r1);

    return 0;
}