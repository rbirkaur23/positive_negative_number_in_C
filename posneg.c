#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  printf("Enter n");
  scanf("%d",&n);
  if(n>0)
    printf("Positive");
  else if(n<0)
    printf("Negative");
  else
    printf("Neither Positive Nor Negative");
  getch();
}
