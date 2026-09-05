#include<stdio.h>
int main()
{
  int dd,mm,yy;
  printf("enter the year\n");
  scanf("%d%d%d",&dd,&mm,&yy);
  if(yy%4==0 && yy%100!=0)
  {
    printf("leap year\n");
  }
  else if(yy%400==0)
  {
    printf("leap year\n");
  }
  else
  {
    printf("not leap year\n");
  }
  printf("AADYA GUPTA S2-50\n");
  return 0;
}