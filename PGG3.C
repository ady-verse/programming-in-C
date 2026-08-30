#include <stdio.h>
int main()
{
  int a,b,c,d,e;
  float f;
  printf("enter 2 numbers");
  scanf("%d %d", &a, &b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=(float)a/b;
  printf("sum = %d\n", c);
  printf("diff= %d\n", d);
  printf("multiplication = %d\n", e);
  printf("division = %f\n", f);
  printf("AADYA GUPTA S2-50");
  return 0;
}