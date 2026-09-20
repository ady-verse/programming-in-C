#include<stdio.h>
#include<conio.h>
int main()
{
  float bytes,kilobytes;
  clrscr();
  printf("enter the size in bytes\n");
  scanf("%f",&bytes);
  kilobytes=bytes/1024;
  printf("size in kilobytes=%.2f KB", kilobytes);
  printf("AADYA GUPTA S2-50\n");
  getch();
  return 0;
}