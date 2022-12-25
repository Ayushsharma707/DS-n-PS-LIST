#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter the nno.");
    scanf("%d", &n);
    printf("factorial is %d", fact(n));
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}