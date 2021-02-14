/* 
You have to print the right-most set bit mask.
        _
eg= 1010100 the right-most set bit mask will be 0000100
          _
eg= 1010001 the right-most set bit mask will be 0000001  
*/

//______________________________More Efficient Way Time Complexity O(1)______________________________
/*
Efficient Approach -
Given Number N
Take Complement Of ~N
Take 2's Complement Of (~N)
Now Just Do This You'll Get The Right Most Set Bit Mask (N&((~N)"))  
*/
#include<iostream>
using namespace std;

int Right_Most_Set_Bit_Mask(int n)
{
    int Complement_2=(~n+1);

    return (Complement_2&n);
}

int main() {
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    cout<<Right_Most_Set_Bit_Mask(n);
    return 0;
}


//____________________________________Time Complexity________________________________________________
// #include<iostream>
// using namespace std;

// int Right_Most_Set_Bit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         if((n&1)==0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int Right_Most_Set_Bit_Mask(int pos)
// {
//     int mask=(1<<pos);
    
//     return mask;
// }

// int main() {
//     int n;
//     cout<<"Enter Any Number : ";
//     cin>>n;

//     int rsb=Right_Most_Set_Bit(n);
    
//     cout<<Right_Most_Set_Bit_Mask(rsb);

//     return 0;
// }