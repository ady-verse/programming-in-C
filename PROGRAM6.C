#include <stdio.h>
int main()
{
  int a,r,n,i;
  int term,sum=0;
  printf("enter the first term");
  scanf("%d",&a);
  printf("enter the common ratio");
  scanf("%d",&r);
  printf("enter the total terms");
  scanf("%d",&n);
  term =a;
  for(i=1;i<=n;i++)
  {
    sum=sum+term;
    term=term*r;
  }
  printf("sum of gm series =%d", sum);
  return 0;
}
