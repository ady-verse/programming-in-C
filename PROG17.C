#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n,m,k;
  clrscr();
  printf("enter the no. of rows");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("AADYA GUPTA S2-50\n");


  printf("enter the no. of rows for evven stars");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("AADYA GUPTA S2-50\n");

  printf("enter the no. of rows for odd stars");
  scanf("%d",&m);
  for (i=1;i<=m;i++)
  {
    for(j=2;j<=2*i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("AADYA GUPTA S2-50\n");
  getch();
  return 0;
}
