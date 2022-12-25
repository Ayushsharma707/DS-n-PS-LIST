#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,m1,m2,d,k;
    printf("enter the coeffecient");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-4*a*c);
    k=sqrt(d);
    if(d<0)
    {
        printf("roots are imaginary");
    }
    else if(d>0)
    {
        printf("roots are real and distinct");
         m1= ((-b+k)/(2*a));
        m2=((-b-k))/(2*a);
        printf("\nroots are%f %f",m1,m2);

    }
    else if(d==0)
    {
         printf("roots are real and equal");
        m1=((-b))/(2*a);
        m2=((-b))/(2*a);
        printf("\nroots are%f %f",m1,m2);
    }


}