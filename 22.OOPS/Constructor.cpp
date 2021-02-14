#include<iostream>
using namespace std;

class Rectangle
{
    int length,breadth;
    public:
    Rectangle(int l,int b);
    Rectangle(Rectangle & Rect);
    void setLength(int length);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int Area();
    int Perimeter();
    bool isSquare();
    ~Rectangle();
};

Rectangle::Rectangle(int l=1,int b=1)
{
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle & Rect)
{
    length=Rect.length;
    breadth=Rect.breadth;
}
void Rectangle::setLength(int length)
{
    this->length=length;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::Area()
{
    return length*breadth;
}
int Rectangle::Perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return(length==breadth)?true:false;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Is Destroyed"<<endl;
}

int main() {
    Rectangle r1(10,5);
    Rectangle r2(15,15);

    cout<<r1.getLength()<<" "<<r1.getBreadth()<<endl;
    cout<<r2.getLength()<<" "<<r2.getBreadth()<<endl;
    
    cout<<"The Area Of The First Rectangle : "<<r1.Area()<<endl<<"The Perimeter Of The First Rectangle : "<<r1.Perimeter()<<endl;
    cout<<"The Area Of The Second Rectangle : "<<r2.Area()<<endl<<"The Perimeter Of The Seconf Rectangle : "<<r2.Perimeter()<<endl;
    
    cout<<"R1 : ";
    (r1.isSquare())?cout<<"The Quadrilatera Is Square"<<endl:cout<<"The Quadrilateral Is Rectangle"<<endl;
    cout<<"R2 : ";
    (r2.isSquare())?cout<<"The Quadrilatera Is Square"<<endl:cout<<"The Quadrilateral Is Rectangle"<<endl;
    
    return 0;
}