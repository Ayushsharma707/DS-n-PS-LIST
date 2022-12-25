#include<iostream>
#include<string.h>
using namespace std;
int compare(char s1[],char s2[]);
int main()
{
  char s1[100],s2[100];
  int c;
  cout<<"enter the string1:";
  gets(s1);
  cout<<"enter the string2:";
  gets(s2);
  c=compare(s1,s2);
  if(c==0)
    cout<<"equal"<<endl;
  else{
    cout<<"not equal"<<endl;
  }    
}

int compare(char s1[],char s2[])
{
     int i,flag=0;
   while(s1[i]!='\0' && s2[i]!='\0' )
   {
         if(s1[i]!=s2[i])
         {
            flag=1;
            break;
         }
   }
   if(flag==0)
    return 0;
   else 
    return 1; 
}


