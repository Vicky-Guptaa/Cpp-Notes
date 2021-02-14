/*____________________________Time Complexity O(n) Kadane's Algo______________________*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0,Max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
        if(sum<0)
        {
           sum=0;
        }
        Max=max(sum,Max);
    }

    cout<<Max;

    return 0;
}

/*_____________________________________Time Complexity O(n2)________________________________*/
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int Max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         int sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum+=arr[j];
//             Max=max(Max,sum);
//         }
//     }
//     cout<<Max;
//     return 0;
// }



/*_____________________________________Time Complexity O(n3)________________________________*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int Max=INT_MIN;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int sum=0;
//             for(int k=i;k<=j;k++)
//             {
//                 sum+=arr[k];
                
//             }
//             Max=max(Max,sum);
//         }
//     }

//     cout<<Max;
//     return 0;
// }