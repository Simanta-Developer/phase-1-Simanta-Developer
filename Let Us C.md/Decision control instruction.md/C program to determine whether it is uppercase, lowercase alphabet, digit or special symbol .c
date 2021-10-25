#include<stdio.h>
int main()
{
  char ch ;
  printf("\nenter a character from keyboard :");
  scanf("%c", &ch);
  if (ch >= 65 && ch <= 90)
    printf("This character is uppercase alphabet\n");
  else if (ch >= 97 && ch <= 122)
    printf("This character is lowercase alphabet\n");
  else if (ch >= 48 && ch <= 57)
    printf("This character is a digit\n");
  else ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || ch >= 123);
    printf("This character is special symbol");
  return 0 ;
}
