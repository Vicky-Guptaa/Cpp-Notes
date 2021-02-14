#include<iostream>
#include<string>
using namespace std;

/*___________________________________Time And Spcae Complexity O(n)________________________________*/

void Replace_Pi(string str,int i)
{
    if(str.length()==i)
    {
        return;
    }
    
    if(str[i]=='p'&&str[i+1]=='i')
    {
        cout<<"3.14";
        i++;
    }
    else
    {
        cout<<str[i];
    }
    Replace_Pi(str,i+1);
    
}
























/*___________________________________Time And Spcae Complexity O(n^2)________________________________*/


// void Replace_Pi(string str)
// {
//     if(str.length()==0)
//     {
//         return;
//     }
//     string ros;
//     if(str[0]=='p'&&str[1]=='i')
//     {
//         cout<<"3.14";

//          ros=str.substr(2);
//     }
//     else
//     {
//         cout<<str[0];
//         ros=str.substr(1);
//     }

//     Replace_Pi(ros);
    
// }

int main() {
    string str;
    cout<<"Enter The String : ";
    getline(cin,str);

    Replace_Pi(str,0);
    return 0;
}