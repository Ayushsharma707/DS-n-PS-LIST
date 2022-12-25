#include <stdio.h>
int main()
{
  char s[100];
  int c = 0;
  printf("enter the  string ");

  gets(s);
  int i = 0;
  while (s[i] != '\0')
  {
    c = c + 1;
    i++;
  }

  for (i = c; i >= 0; i--)
  {
    printf("%c", s[i]);
  }

  return 0;
}