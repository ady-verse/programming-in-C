#include<stdio.h>
int main()
{
  int i,n,a=0,b=1,c;
  printf("enter the number upto which to find fibbonacci series");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
  }
  printf("\nAADYA GUPTA S2-50");
  return 0;
}