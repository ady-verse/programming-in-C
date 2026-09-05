#include<stdio.h>
int main()
{
  int marks;
  printf("enter your marks");
  scanf("%d",&marks);
  if(marks>=80 && marks<=90)
  {
    printf("excellent,grade a\n");
  }
  if(marks>=60 && marks<80)
  {
    printf("grade b\n");
  }
  if(marks>=40 && marks<60)
  {
    printf("grade c\n");
  }
  if(marks<40)
  {
    printf("fail\n");
  }
  printf("AADYA  GUPTA S2-50\n");
  return 0;
}