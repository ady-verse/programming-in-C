#include<stdio.h>
#include<conio.h>
int main()
{
  float basic,hra,da,gross;
  int category;
  clrscr();
  printf("enter the basic salay");
  scanf("%f",&basic);
   if(basic<=10000)
      category=1;
   else if (basic<=20000)
      category=2;
   else
      category=3;

  switch(category)
  {
    case 1:
      hra=0.20*basic;
      da=0.80*basic;
      break;

    case 2:
      hra=0.25*basic;
      da=0.90*basic;
      break;
    case 3:
      hra=0.30*basic;
      da=0.95*basic;
      break;
  }
  gross=basic+hra+da;
  printf("gross salary=%.2f", gross);
  printf("AADYA GUPTA S2-50");
  getch();
  return 0;
}