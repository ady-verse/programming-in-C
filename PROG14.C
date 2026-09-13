#include<stdio.h>
int main()
{
  float a,b,result;
  char op;
  printf("enter the two numbers:");
  scanf("%f%f", &a, &b);
  printf("enter the operator");
  op=getch();
  printf("%c\n",op);
  switch(op)
  {
    case '+':
       result =a+b;
       printf("result =%f\n", result);
       break;
    case '-':
       result = a-b;
       printf("result =%f\n", result);
       break;
    case '/':
       result=a/b;
       printf("result =%f\n", result);
       break;
    case '*':
       result=a*b;
       printf("result =%f\n", result);
       break;
    default:
       printf("invalid operator\n");
  }
  getch();
  printf("AADYA GUPTA S2-50\n");
  return 0;
}