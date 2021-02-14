#include<iostream>
using namespace std;

int main() {

    char c;
    cout<<"Enter Any Character : ";
    cin>>c;

    switch(c)
    {
        case 'a': cout<<c<<" Is A Vowel"; break;

        case 'e': cout<<c<<" Is A Vowel"; break;

        case 'i': cout<<c<<" Is A Vowel"; break;

        case 'o': cout<<c<<" Is A Vowel"; break;

        case 'u': cout<<c<<" Is A Vowel"; break;

        default : cout<<c<<" Is A Consonant";
    }
    

    return 0;
}