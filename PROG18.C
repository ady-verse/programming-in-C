#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
  clrscr();
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=4-i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    for(j=i-1;j>=1;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  printf("AADYA GUPTA S2-50");
  getch();
  return 0;
}

