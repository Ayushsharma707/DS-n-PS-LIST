#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    string t;
    int i,l;
    cout<<"enter the string"<<endl;
    gets(s);
    for(i=strlen(s);i>=0;i--)
    {
        t=t+s[i];
        cout<<t<<endl;
    }
}