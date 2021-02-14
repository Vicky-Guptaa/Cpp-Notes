#include<iostream>
using namespace std;
class Car
{
    public:
    virtual void start()=0;
    virtual void stop()=0;
};
class Innova : public Car
{
    public:
    void start()
    {
        cout<<"Innova Started\n";
    }
    void stop()
    {
        cout<<"Innova Stopped\n";
    }
};
class Swift : public Car
{
    public:
    void start()
    {
        cout<<"Swift Started\n";
    }
    void stop()
    {
        cout<<"Swift Stopped\n";
    }
};
int main() {
    Car *ptr=new Innova();
    ptr->start();
    ptr->stop();
    ptr=new Swift();
    ptr->start();
    ptr->stop();
    return 0;
}