//_________________________________________Time Complexity O(1)___________________________________________

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    // Below steps set bits after 
    // MSB (including MSB) 
  
    // Suppose n is 273 (binary 
    // is 100010001). It does following 
    // 100010001 | 010001000 = 110011001 

    n|=n>>1;

    // This makes sure 4 bits 
    // (From MSB and including MSB) 
    // are set. It does following 
    // 110011001 | 001100110 = 111111111 
    n|=n>>2;
    n|=n>>4;
    n|=n>>8;
    n|=n>>16;
    
    // Increment n by 1 so that 
    // there is only one set bit 
    // which is just before original 
    // MSB. n now becomes 1000000000 
    n=n+1;
    // Printing original MSB after shifting. 
    // n now becomes 100000000 
    cout<<(n>>1);
    return 0;
}


// Time Complexity O()
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter Any Number : ";
//     cin>>n;
//     int count=0;
//     while(n)
//     {
//         count++;
//         n=n>>1;
//     }
//     count--;
    
//     cout<<pow(2,count);;

//     return 0;
// }