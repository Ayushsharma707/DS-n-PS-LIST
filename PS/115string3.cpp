#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char s1[100],s2[100];
  int i,j,l=0,v,d;
  cout<<"enter the string"<<endl;
  gets(s1);
  strcpy(s2,s1);
  strrev(s2);
  d=strcmp(s1,s2);
  if(d==0)
   cout<<"pallindrome"<<endl;
  else
   cout<<"is not a pallindrome"<<endl;
  return 0;  
   
  



}