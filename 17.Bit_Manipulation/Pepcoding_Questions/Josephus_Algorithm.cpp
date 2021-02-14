//                             Without Bit MAnipulations
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter A Number :";
//     cin>>n;

//     int product=1;
//     while(product*2<=n)
//     {   
//         product*=2;
//     }
//     int rem=n%product;
//     cout<<(rem*2+1);
//     return 0;
// }

//                                   Bit MAnipulations
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter A Number :";
    cin>>n;

    int temp=n,count=0;
    while(temp)
    {
            count++;     
        temp=(temp>>1);   
    }
    count--;
    int mask=(1<<count);
    n=n-mask;
    cout<<(n*2+1);
    return 0;
}