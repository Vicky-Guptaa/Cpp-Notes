#include<iostream>
using namespace std;

int main() {
    int i;
    float f;
    double d;

    cout<<"int Size : "<<sizeof(i)<<endl;
    cout<<"float Size : "<<sizeof(f)<<endl;
    cout<<"double Size : "<<sizeof(d)<<"\n\n";

    long int li; 
    long double ld;

    cout<<"long int Size : "<<sizeof(li)<<endl;
    cout<<"long double Size : "<<sizeof(ld)<<"\n\n";

    char c;
    wchar_t wc;

    cout<<"char Size : "<<sizeof(c)<<endl;
    cout<<"wchar Size : "<<sizeof(wc)<<endl;


    return 0;
}