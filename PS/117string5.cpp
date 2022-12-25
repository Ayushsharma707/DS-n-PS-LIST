#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {
    char s1[100];
    int l,i;
    cout<<"enter the string:";
    gets(s1);
    l=strlen(s1)-1;
    for(i=0;i<=l;i++)
    {
        s1[i]=s1[i]-32;
    }

    puts(s1);
 }