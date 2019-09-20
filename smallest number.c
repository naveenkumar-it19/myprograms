#include<stdio.h>
#include<conio.h>
void main()
{
int a[30], b, c, d;
scanf("%d", &c);
printf("Enter %d number ",c);
for (b = 0; b < c; b++)
scanf("%d", &a[b]);
d=a[0];
for (b = 0; b < c; b++) {
if (a[b] < d)
{
d=a[b];
}
}
printf("\nSmallest number : %d", d);
}