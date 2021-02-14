#include <iostream>
#include <string>
using namespace std;
/*________________________________Time And Space Complexity Is O(n^2)____________________________________*/

// string Move_X(string str)
// {
//     if (str.length() == 0)
//     {
//         return "";
//     }
//     char ch = str[0];
//     string ans = Move_X(str.substr(1));

//     if (ch == 'x')
//     {
//         return (ans + ch);
//     }
//     return (ch + ans);
// }

/*________________________________Time And Space Complexity Is O(n)____________________________________*/

string Move_X(string str,int i)
{
    if (str.length() == i)
    {
        return "";
    }
    
    string ans = Move_X(str,i+1);
    char ch=str[i];
    if (ch == 'x')
    {
        return (ans + ch);
    }
    return (ch + ans);
}
int main()
{
    string str;
    cout << "Enter The String : ";
    getline(cin, str);

    cout<<Move_X(str,0)<<endl;
    return 0;
}