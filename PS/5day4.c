#include<stdio.h>
int primeno(int f,int l);
int main()
{
    int f,l;
    printf("enter the range");
    scanf("%d %d",&f,&l);
    printf("prime no in given range\n");
    primeno(f,l);
}
 int primeno(int f,int l)
{
     int i,j,c;
     for(i=f;i<=l;i++)
     {
         c=0;
        for(j=1;j<=l;j++)
        {
            if(i%j==0)
            {
               c++;
            }
        }
        if(c==2)
        {
            printf(" %d",i);
        }
     }
}