#include <iostream>
using namespace std;

class Integer
{
    int num;

public:
    void setInt()
    {
        cin >> num;
    }
    void getInt()
    {
        cout << num << endl;
    }
    Integer operator+(Integer a)
    {
        Integer temp;
        temp.num = num + a.num;
        return temp;
    }
    Integer operator-(Integer a)
    {
        Integer temp;
        temp.num = num - a.num;
        return temp;
    }
    Integer operator++()
    {
        Integer temp;
        temp.num = ++num;
        return temp;
    }
    Integer operator++(int)
    {
        Integer temp;
        temp.num = num++;
        return temp;
    }
    friend istream &operator>>(istream &in,Integer &b);
    friend ostream &operator<<(ostream &o, Integer &b);
};
istream &operator>>(istream &in,Integer &b)
{
    in>>b.num;
    return in;
}
ostream &operator<<(ostream &o, Integer &b)
{
    o<<b.num;
    return o;
}

int main()
{
    Integer n1,n2,n3;
    // n1.setInt();
    // n2.setInt();
    cin>>n1>>n2;
    n3=n1.operator+(n2);
    cout<<n3;


    return 0;
}