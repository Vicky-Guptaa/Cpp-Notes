#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    int Marks[3];
    public:
    void setRoll_no()
    {
        cout<<"Enter The Roll No Of The Student : ";
        cin>>roll_no;
        if(roll_no<0)
        {
            roll_no=-roll_no;
        }
    }
    void setName()
    {
        cout<<"Enter The Name Of The Student : ";
        cin.ignore();
        getline(cin,name);
    }
    void setMarks()
    {
        cout<<"Enter The Marks Of The Students : \n";
        for(int i=0;i<3;i++)
        {
            cin>>Marks[i];
        }
    }

    int Total()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=Marks[i];
        }
        return sum;
    }
    char Grade()
    {
        int sum=Total();
        if(sum>200)
        {
            return 'A';
        }
        else if(sum>100)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }

    }

};

int main() {
    Student s1;
    s1.setRoll_no();
    s1.setName();
    s1.setMarks();
    cout<<"Total Marks : "<<s1.Total();
    cout<<endl<<"Grade : "<<s1.Grade();
    return 0;
}