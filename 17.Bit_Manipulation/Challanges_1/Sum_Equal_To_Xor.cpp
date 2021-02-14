
// n+i=n^i for how many Integers 0<=i<=n

//____________________________________________Efficient Way_____________________________________________
#include<iostream>
using namespace std;

int result(int n)
{
    int count=0;
    while(n)
    {
        if((n&1)==0)
        count++;
        n=n>>1;
    }
    // Count give no of zeros in the bianry number n
    
    return (1<<count);
    //(1<<count) returs the 2^count 
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    cout<<result(n);
    return 0;
}


//_________________________________________Time Complexity O(n)_________________________________________
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter Any Number : ";
//     cin>>n;
//     int count=0;
//     for(int i=0;i<=n;i++)
//     {
//         if((n+i)==(n^i))
//         {
//             count++;
//         }    
//     } 
//     cout<<count;
    
//     return 0;
// }
