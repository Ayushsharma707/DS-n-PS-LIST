#include <stdio.h>
int gcd(int n1, int n2);
int main()
{
    int n1, n2;
    printf("enter the no.");
    scanf("%d%d", &n1, &n2);
    printf("gcd is%d", gcd(n1, n2));
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
    {
        return (n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}