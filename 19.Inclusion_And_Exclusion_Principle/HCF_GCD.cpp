//____________________________________More Effiecient Approach___________________________________________
/* 
Euclid Algo 
Number 1 : 42 And Number 2 : 24 
42 % 24 = 18 
24 % 18 = 6
18 % 6  = 0

The HCf Will Be 6 As Remainder Become 0

Logic - The HCF of Two Number Does Not Change While Subtraction.
*/
#include<iostream>
using namespace std;

int HCF(int a,int b)
{

    
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;

}

int main() {
    int a,b;
    cout<<"Enter Any Two Number : ";
    cin>>a>>b;

    cout<<HCF(a,b);
    return 0;
}

//____________________________________________Time Complexity O(n)_______________________________________

// #include<iostream>
// using namespace std;

// int HCF(int a,int b)
// {
//     int min,hcf=1;
//     a>b?min=b:min=a;
    
//     for(int i=2;i<=min;i++)
//     {
//         if(a%i==0&&b%i==0)
//         {
//             hcf*=i;
//             a/=i;
//             b/=i;
//             i--;
//         }
//     }
//     return hcf;
// }

// int main() {
//     int n_1,n_2;
//     cout<<"Enter Any Two Number : \n";
//     cin>>n_1>>n_2;

//     cout<<"The HCF Of Two Number Is : "<<HCF(n_1,n_2);
//     return 0;
// }