#include<iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    for(int i=1;i<str.size();i++)
    {
        if(str[i-1]==str[i])
        {
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;

    
    return 0;
}