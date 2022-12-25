#include <stdio.h>
int mean(void);
// int median(void);
int main()
{

    printf("mean of no.%d", mean());
    // printf("median of no.%d", median(num));
}
int mean()
{
    int n = 5, a, b, c, d, e;
    printf("enter five no.");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    static int sum = 0;
    sum = (a + b + c + d + e) / 5;
    return sum;
}
// int median()
// {
//     int n = 5, a, b, c, d, e;
//     printf("enter five no.");
//     scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//     median = 5 / 2;
// }