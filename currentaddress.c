#include<stdio.h>
#include<string.h>
void main()
{
char cadd[10];
char padd[10];
printf("enter the current address");
scanf("%s",cadd);
strcpy(padd,cadd);
printf("cadd=%s\t padd=%s\n",cadd,padd);
}