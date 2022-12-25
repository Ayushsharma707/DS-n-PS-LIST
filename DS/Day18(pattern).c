/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void main()
{
    int i,n;
    char s[50];
   printf("enter the elemnts");
   gets(s);
    for(i=0;i<strlen(s);i++)
    {
      puts(s);
     s[i]='.';
    }

}