#include<stdio.h>
int main()
{
  int i;
  float sum=0;
  for(i=1;i<=20;i++)
  {
    sum=sum+1.0/i;
  }
  printf("the sum of the series is %f\n",sum);
  printf("AADYA GUPTA S2-50");
  return 0;
}