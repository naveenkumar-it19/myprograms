#include <stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter a year: ");
scanf("%d",&a);
if(a%400==0)
{
if(a%4==0)
printf("%d is a leap year.",a);
}else
printf("%d is not a leap year.",a);
}
