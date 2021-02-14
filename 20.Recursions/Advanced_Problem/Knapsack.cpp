#include<iostream>
using namespace std;

int Knapsack(int weight[],int price[],int w,int n)
{
    if(w==0||n<0)
    {
        return 0;
    }
    if(weight[n]>w)
    {
        return Knapsack(weight,price,w,n-1);
    }
    
    return max(Knapsack(weight,price,w-weight[n],n-1)+price[n],Knapsack(weight,price,w,n-1));
    
}

int main() {
    int n;
    cout<<"Enter The Length Of The Array : ";
    cin>>n;
    int price[n],weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>price[i];
    }
    int w;
    cout<<"Enter The Max Weight Of Knapsack : ";
    cin>>w;
    cout<<Knapsack(weight,price,w,n-1)<<endl;

    return 0;
}