// Program to check if the character is upper case or lower case

#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter a character"<<endl;
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"Upper Case"<<endl;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<"Lower case"<<endl;

    }
    else
    {
        cout<<"Enter character between A to Z";
    }

    return 0;
}