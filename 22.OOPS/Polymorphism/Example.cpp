#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void Perimeter()=0;
    virtual void Area()=0;
};
class Rectangle : public Shape
{
    int length;
    int breadth;
    public:
    Rectangle()
    {
        setLength();
        setBreadth();
    }
    void setLength()
    {
        cout<<"Enter The Length Of The Rectangle : ";
        cin>>length;
    }
    void setBreadth()
    {
        cout<<"Enter The Breadth Of The Rectangle : ";
        cin>>breadth;
    }
    void Area()
    {
        cout<<"Area Of Rectangle : "<<length*breadth<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter Of Rectangle : "<<2*(length+breadth)<<endl;
    }
};
class Circle : public Shape
{
    int radius;
    public:
    Circle()
    {
        setRadius();
    }
    void setRadius()
    {
        cout<<"Enter The Radius Of Circle : ";
        cin>>radius;
    }
    void Area()
    {
        cout<<"Area Of Circle : "<<((3.14)*radius*radius)<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter Of Rectangle : "<<(2*(3.14)*radius)<<endl;
    }
};
int main() {
    Shape *ptr=new Circle();
    ptr->Perimeter();
    ptr->Area();
    ptr=new Rectangle();
    ptr->Perimeter();
    ptr->Area();
    return 0;
}