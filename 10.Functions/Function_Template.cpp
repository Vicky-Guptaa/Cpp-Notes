#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b)
{
    return a>b?a:b;
}

int main() {
    cout<<maxim(2,5)<<endl;
    cout<<maxim(3.5f,5.2f)<<endl;
    cout<<maxim(4.5,5.6)<<endl;
    cout<<maxim(2.4f,5.0f)<<endl;
    return 0;
}