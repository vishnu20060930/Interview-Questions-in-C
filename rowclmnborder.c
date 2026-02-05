#include <stdio.h>
void main()
{
int clmn;
int rows;
printf("enter the amount of rows:\n");
scanf("%d",&rows);
printf("enter the amount of columns:\n");
scanf("%d",&clmn);
for(int i=1;i<=rows;i++)
{
for (int j=1;j<=clmn;j++)
{
if(i==1||i==rows||j==1||j==clmn)
{
printf("* ");
}
else
{
printf("  ");
}
}
printf("\n");
}
}