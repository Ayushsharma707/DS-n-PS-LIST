#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a, b;
    printf("enter th two no.");
    scanf("%d%d", &a, &b);
    printf("GCD=%d", gcd(a, b));
}
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return (b, a % b);
    }
}
