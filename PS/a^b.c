#include <stdio.h>
int power(int a, int b);
int main()
{
    int a, b;
    printf("ENTER THE BASE & POWER");
    scanf("%d%d", &a, &b);
    power(a, b);
    printf("%d", power(a, b));
    return 1;
}
int power(int a, int b)
{
    int t, c;
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        if (b % 2 == 0)
        {
            t = b / 2;
            c = power(a, t);
            c = c * c;
            return c;
        }
        else
        {
            (t = (b - 1) / 2);
            c = power(a, t);
            c = c * c * a;
            return c;
        }
    }
}