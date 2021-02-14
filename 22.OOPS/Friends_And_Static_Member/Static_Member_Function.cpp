#include<iostream>
using namespace std;

class Students
{
    int roll_no;
    static int adm_no;
    string name;
    public:
    Students(string name)
    {
        roll_no=++adm_no;
        this->name=name;
    }
    void show()
    {
        cout<<"Roll No : "<<roll_no<<"\nName : "<<name<<"\n\n";
    }

};

int Students::adm_no=0;

int main() {
    Students s1("Ram");
    Students s2("Shyan");
    Students s3("Naam");
    Students s4("Aam");
    Students s5("Samaan");
    Students s6("Arram");
    Students s7("Paraam");
    Students s8("havaan");

    s1.show();
    s2.show();
    s3.show();
    s4.show();
    s5.show();
    s6.show();
    s7.show();
    s8.show();

    return 0;
}