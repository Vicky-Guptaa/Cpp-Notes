#include<iostream>
using namespace std;

void Flood_Fill(int arr[6][7],bool check[6][7],int i,int j,string ans)
{
    if(i<0||i==6||j<0||j==7||arr[i][j]==1||check[i][j]==1)
    {
        return;
    }
    if(i==5&&j==6)
    {
        cout<<ans<<endl;
        return;    
    }
    check[i][j]=1;
    Flood_Fill(arr,check,i-1,j,ans+'t');
    Flood_Fill(arr,check,i,j-1,ans+'l');
    Flood_Fill(arr,check,i+1,j,ans+'d');
    Flood_Fill(arr,check,i,j+1,ans+'r');
    check[i][j]=0;
}

int main() {
    int arr[6][7]={
    {0,1,0,0,0,0,0},
    {0,1,0,1,1,1,0},
    {0,0,1,0,0,0,0},
    {1,0,1,1,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,0,0,0,0,0}
    };
    bool check[6][7]={false};
    Flood_Fill(arr,check,0,0,"");
    return 0;
}