#include<iostream>
using namespace std;

int main() {
    char c;
    cout<<"Enter Any Character : ";
    cin>>c;
    
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
    {
        cout<<c<<" Is Vowel";
    }
    else
    {
        cout<<c<<" Is Consonat";
    }
    return 0;
}