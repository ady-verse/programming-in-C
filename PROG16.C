
#include<stdio.h>
int main()
{
 int n,temp,digit,divisor=1;
 printf("enter the number");
 scanf("%d",&n);
 temp = n;
 while(temp>=10)
 {
   temp=temp/10;
   divisor=divisor*10;
 }
 while(divisor>0)
 {
   digit=n/divisor;
   switch(digit)
   {
     case 0:
      printf("zero");
      break;
    case 1:
      printf("one");
      break;
    case 2:
      printf("two");
      break;
    case 3:
      printf("three");
      break;
    case 4:
      printf("four");
      break;
    case 5:
      printf("five");
      break;
    case 6:
      printf("six");
      break;
    case 7:
      printf("seven");
      break;
    case 8:
      printf("eight");
      break;
    case 9:
      printf("nine");
      break;
   }
   n=n%divisor;
   divisor=divisor/10;
 }
 printf("\nAADYA GUPTA S2-50\n");
 return 0;
}