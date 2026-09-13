#include<stdio.h>
int main()
{
  int a,original,reverse,digit;
  printf("enter the digit");
  scanf("%d",&a);
  original=a;
  digit=a%10;
  reverse=digit*100;
  a=a/10;

  digit=a%10;
  reverse=reverse+digit*10;
  a=a/10;

  digit=a%10;
  reverse=reverse+digit;

  if(original==reverse)
  {
    printf("the number is a palindrome\n");
    printf("AADYA GUPTA S2-50");
  }
  else
  {
    printf("the number is not a palindrome\n");
    printf("AADYA GUPTA S2-50");
  }
  return 0;
}
