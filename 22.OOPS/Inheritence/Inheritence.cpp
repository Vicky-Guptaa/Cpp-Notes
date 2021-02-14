#include<iostream>
using namespace std;

class Rectangle
{
    int length,breadth;
    public:
    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
        cout<<"Base Class Constructor"<<endl;
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int Area()
    {
        return length*breadth;
    }
    int Perimeter()
    {
        return 2*(length+breadth);
    }
    bool isSquare()
    {
        return (length==breadth)?1:0;
    }
    ~Rectangle()
    {
        cout<<"Base Class Is Destroyed"<<endl;
    }
};

class Cuboid : public Rectangle
{
    int hight;
    public:
    Cuboid(int l=0,int b=0,int h=0) : Rectangle(l,b)
    {
        // setLength(l);
        // setBreadth(b);
        setHight(h);
        cout<<"Derived Class Constructor"<<endl;
    }
    void setHight(int h)
    {
        hight=h;
    }
    int getHight()
    {
        return hight;
    }
    int volume()
    {
        return hight*Area();
    }
    int SurfaceArea()
    {
        return 2*(getLength()*getBreadth()+getBreadth()*hight+hight*getLength());
    }
    bool isCube()
    {
        return ((getLength()==getBreadth())&&(getBreadth()==hight))?1:0;
    }
    ~ Cuboid()
    {
        cout<<"The Cuboid Is Destroyed"<<endl;
    }
};

int main() {
    Cuboid c1(5,5,5);
    (c1.isCube()==1)?cout<<"This Is Cuboid"<<endl:cout<<"This Is Not A Cuboid"<<endl;
    
    cout<<c1.volume()<<endl;
    cout<<c1.SurfaceArea()<<endl;
    cout<<c1.isCube()<<endl;


    return 0;
}