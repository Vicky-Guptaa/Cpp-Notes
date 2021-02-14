#include<iostream>
using namespace std;

class Basic_Car
{
    public:
    void start()
    {
        cout<<"Car Start"<<endl;
    }
    void stop()
    {
        cout<<"Car Stop"<<endl;
    }
};
class Advanced_Car : public Basic_Car
{
    public:
    void Play_Music()
    {
        cout<<"Music Play"<<endl;
    }
    void On_Ac()
    {
        cout<<"On Ac"<<endl;
    }
    void Automatic_Drive()
    {
        cout<<"Automatic Drive On"<<endl;
    }
};

int main() {
    Basic_Car *C1;
    C1=new Advanced_Car();
    (*C1).start();
    C1->stop();
    // C1->Play_Music();
    // C1->Automatic_Drive();
    Advanced_Car C2;
    Basic_Car *ptr=&C2;
    (*ptr).start();
    ptr->stop();
    return 0;
}