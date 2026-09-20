#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j,num;
  clrscr();
  printf("enter rows");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    num=1;
    for(j=0;j<n-i-1;j++)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
      printf("%d ", num);
      num=num*(i-j)/(j+1);
    }
    printf("\n");
  }
  printf("AADYA GUPTA S2-50\n");
  getch();
  return 0;
}
