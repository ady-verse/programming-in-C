#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("enter 2 numbers");
  scanf("%d %d", &a, &b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("sum = %d\n", c);
  printf("diff= %d\n", d);
  printf("multiplication = %d\n", e);
  printf("division = %f\n", f);
  return 0;
}