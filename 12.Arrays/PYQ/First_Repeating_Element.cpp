/*_______________________________________Smallest Index_______________________________________*/
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

    int idx[n+1],Min=INT_MAX;
    for(int i=0;i<n+1;i++)
    {
        idx[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            Min=min(Min,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
        
    }

    if(Min==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<< Min + 1 <<endl;
    }
    


              
    return 0;
}


/*_______________________________________Smallest Gap________________________________________*/

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
//     int ans=0,Min=INT_MAX;
    
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 ans=j-i;
//             }
//         }
//         Min=min(Min,ans);
//     }

//     cout<<Min;
//     return 0;
// }