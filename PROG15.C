#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character:\n");
  scanf("%c", &ch);
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    printf("the charcater is a vowel\n");
    break;

    default:
       printf("the character is not a vowel");

  }
  printf("AADYA GUPTA S2-50\n");
  return 0;
}