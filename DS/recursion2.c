#include <stdio.h>
int pow(int a, int b);
int main()
{
    int a, b;
    printf("enter the base");
    printf("enter the power");
    scanf("%d\n%d", &a, &b);
    printf("%d", pow(a, b));
}
int pow(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }
    else if (b == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * pow(a, b - 1));
    }
}