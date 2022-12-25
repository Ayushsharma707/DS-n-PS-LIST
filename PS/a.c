#include<stdio.h>
int main()
{
    char s[100],t[50],k[50];
    int i,c;
    printf("enter the string");
    gets(s);
   for(i=0;s[i]!='\0';i++)
   {
    c++;
  }
   int f=0;
   int l=c-1;
   while(l>f)
   {
    if(s[f]!=s[l])
    {
        printf("not pallindrome");
        f++;
        l--;
        return 0;
    }
   }
   for(i=0;i<=c;i++)
   {
     printf("%cis pallindrome",s[i]);
   }
  return 0;
}


