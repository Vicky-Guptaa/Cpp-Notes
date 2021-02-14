#include<iostream>
using namespace std;

int Paper[][5]={{1,1,1,1,0},{2,2,1,0,0},{2,1,2,0,2},{2,1,0,0,0},{2,2,2,2,0}};

void Colour(int r,int c,int colo,int prev)
{
    if(r<0||r>=5||c<0||c>=5)
    {
        return;
    }
    if(Paper[r][c]!=prev)
    {
        return;
    }
    Paper[r][c]=colo;
    Colour(r-1,c,colo,prev);
    Colour(r,c-1,colo,prev);
    Colour(r+1,c,colo,prev);
    Colour(r,c+1,colo,prev);
}

int main() {
    int r,c;
    cout<<"Enter The Coordinates Where We Have To Change The Colour : ";
    cin>>r>>c;
    int col_fill;
    cout<<"Enter The Colour To Fill : ";
    cin>>col_fill;
    int Prev_col;
    cout<<"Enter The Previous Colour : ";
    cin>>Prev_col;
    Colour(r,c,col_fill,Prev_col);
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<Paper[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
