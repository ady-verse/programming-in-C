#include<stdio.h>
int main()
{
  int n,j,i;
  printf("enter the number of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    switch(i)
    {
      case 1:
	printf("*\n");
	break;
      case 2:
	printf("* *\n");
	break;
      case 3:
	printf("* * *\n");
	break;
      case 4:
	printf("* * * *\n");
	break;
      case 5:
	printf("* * * * *\n");
	break;
      default:
	printf("pattern limited to 5 rows\n");
    }
  }
  return 0;
}


