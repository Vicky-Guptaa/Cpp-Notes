#include<iostream>
using namespace std;

class Rational
{
    int p,q;
    public:
    void showData()
    {
        cout<<"The Rational Number : "<<p<<'\\'<<q<<endl;
    }
    void setP()
    {
        cout<<"Enter Numerator : ";
        cin>>p;
    }
    void setQ()
    {
        cout<<"Enter Denominator : ";
        cin>>q;
    }
    int getP()
    {
        return p;
    }
    int getQ()
    {
        return q;
    }
    Rational operator +(Rational r)
    {
        Rational Temp;
        Temp.p=(q*r.p)+(p*r.q);
        Temp.q=q*r.q;
        return Temp;
    }
    Rational operator++()
    {
        Rational Temp;
        Temp.p=q+p;
        Temp.q=q;
        return Temp;
    }
    Rational operator++(int)
    {
        Rational Temp;
        Temp.p=p;
        Temp.q=q;
        p=p+q;
        return Temp;
    }

};

int main() {
    Rational r1,r2;
    r1.setP();
    r1.setQ();
    r2.setP();
    r2.setQ();
    Rational r3;
    r3=++r1;
    r1.showData();
    r3.showData();

    return 0;
}