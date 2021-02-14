/*________________________________Time And Space Complexity Is O(n)____________________________________*/

#include<iostream>
#include<string>
using namespace std;

string Reverse(string str,string reverse,int i)
{
    if(str.length()==i)
    {
        return "";
    }
    reverse=Reverse(str,reverse,i+1);
    char ch=str[i];
    return (reverse+ch);
}

int main() {

cout<<Reverse("Serving Tech","",0)<<endl;
    return 0;
}

/*________________________________Time And Space Complexity Is O(n^2)____________________________________*/

// #include <iostream>
// #include<string>
// using namespace std;

// void Reverse(string str)
// {
//     if (str.length() == 0)
//     {
//         return ;
//     }

//     string ros=str.substr(1);
//     Reverse(ros);
//     cout<<str[0];
// }

// int main()
// {
//     string str ;
//     cout<<"Enter The String : ";
//     getline(cin,str);
//     Reverse(str);
//     return 0;
// }