#include <iostream>
using namespace std;

void Keypad(string str, string ans, string KeyArr[])
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    int n = str[0] - '0';
    string code = KeyArr[n];
    for (int i = 0; i < code.length(); i++)
    {
        char ch = code[i];
        Keypad(str.substr(1), ans + ch,KeyArr);
    }
}

void printKeypad(int num)
{
    string KeyArr[11] = {"", ".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    string str = to_string(num);
    Keypad(str, "", KeyArr);
}
int main()
{
    int num;
    cin>>num;
    printKeypad(num);
    return 0;
}