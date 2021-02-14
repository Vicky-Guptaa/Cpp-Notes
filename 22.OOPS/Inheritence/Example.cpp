#include<iostream>
using namespace std;

class Employee 
{
    int Eid;
    string Ename;
    public:
    Employee(int id,string name)
    {
        setEid(id);
        setEname(name);
    }
    void setEid(int id)
    {
        Eid=id;
    }
    void setEname(string Name)
    {
        Ename=Name;
    }
    int getEid()
    {
        return Eid;
    }
    string getEname()
    {
        return Ename;
    }
};
class Part_Time_Employee : public Employee
{
    int Daily_Wages;
    public:
    Part_Time_Employee(int id,string name,int wage) : Employee(id,name)
    {
        setDaily_Wages(wage);
    }
    void setDaily_Wages(int Wage)
    {
        Daily_Wages=Wage;
    }
    int getDaily_Wages()
    {
        return Daily_Wages;
    }
    void ShowPartTime()
    {
        cout<<"Eid : "<<getEid()<<endl<<"Ename : "<<getEname()<<endl<<"Daily Wage : "<<getDaily_Wages()<<"\n\n";
    }
};
class Full_Time_Employee : public Employee
{
    int Salary;
    public:
    Full_Time_Employee(int id,string name,int sal) : Employee(id,name)
    {
        setSalary(sal);
    }
    void setSalary(int sal)
    {
        Salary=sal;
    }
    int getSalary()
    {
        return Salary;
    }
    void ShowFullTime()
    {
        cout<<"Eid : "<<getEid()<<endl<<"Ename : "<<getEname()<<endl<<"Salary : "<<getSalary()<<"\n\n";
    }
};


int main() {
    Part_Time_Employee P1(1,"Vicky",1000);
    Full_Time_Employee F1(2,"Jugnu",500000);
    
    P1.ShowPartTime();
    F1.ShowFullTime();
       
    return 0;
}