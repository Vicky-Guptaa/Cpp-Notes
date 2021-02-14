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

    int counter = 1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


/*___________________________________________Dummy Bubble Sort_________________________________*/

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
    
//     int count;
//     for(int i=0;i<n;i++)
//     {
//         count=0;
//         for(int j=1;j<n-i;j++)
//         {
//             if(arr[j-1]>arr[j])
//             {
//                 int temp=arr[j-1];
//                 arr[j-1]=arr[j];
//                 arr[j]=temp;
//                 count--;
//             }
//             count++;
//         }
//         if(count==n-1)
//         {
//             break;
//         }
//     }

//     cout<<"Sorted Array : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }