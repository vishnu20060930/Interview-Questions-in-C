#include <stdio.h>

void main()
{
int cigar;
int weekend;
printf("enter the cigar value\n");
scanf("%d",&cigar);
printf("enter 1 for weekend \t 0for not weekend\n");
scanf("%d",&weekend);
if(weekend)
{
    if(cigar>=40)
    {
        printf("true");
    }
    else
    {
    printf("false");
}
}
else
{
    if(cigar>=40&&cigar<=60)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
}