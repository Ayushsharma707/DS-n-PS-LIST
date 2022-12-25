#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"enter the string:"<<endl;
    int i,l;
    char s[100];
    string t;// use to store  character in any variable
    gets(s);
    cout<<"Prefix are:"<<endl;
    for(i=0;i<strlen(s);i++)
    {
        t=t+s[i];
       cout<<t<<endl;
    }
}