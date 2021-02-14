#include<iostream>
using namespace std;

int main() {
    bool Paper[5][5]={false};
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