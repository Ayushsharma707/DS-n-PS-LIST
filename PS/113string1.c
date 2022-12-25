#include <stdio.h>
int main()
{
    char s[100];
    int c = 0;
    printf("enter the  string ");
    int i = 0;
    gets(s);
    while (s[i] != '\0')
    {
        c = c + 1;
        i++;
    }
    printf("%d", c);

    

    return 0;
}