/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,a[50],n,m1,m2,c=0,ele;
    printf("enter the no. of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
      
    }
    int s=0,e=n-1;
    printf("enetr the elemnt to be found");
    scanf("%d",&ele);
  while(s<=e)
  {
      m1=s+(e-s)/3;
      m2=m1+(e-s)/3;
      if(ele==a[m1] || ele==a[m2])
      {
          c++;
          break;
      }
      else if(ele<a[m1])
      {
          e=m1-1;
      }
      else if(ele>a[m2])
      {
          s=m2+1;
      }
      else
      {
          e=m2-1;
          s=m1+1;
      }
  }  
      if(c>0)
     {
     printf("element found");
    }
     else
    {
     printf("elemnt not found");
    }
 
  }