#include<iostream>
using namespace std;

class BaseCar
{
    public:
    virtual void Start()
    {
        cout<<"Base Car Start"<<endl;
    }
};
class AdvancedCar : public BaseCar
{
    public:
    void Start()
    {
        cout<<"Advanced Car Start"<<endl;
    }
};

int main() {
    BaseCar *p=new AdvancedCar;
    p->Start();
    return 0;
}