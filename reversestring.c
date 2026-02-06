#include <stdio.h>
#include<string.h>
void main()
{
char user_name[10];
printf("enterthe name :\n");
scanf("%s",user_name);
printf("the name of the useris : %s\n",user_name);
int size=strlen(user_name);
for(int i=size-1;i>=0;i--)
{
printf("%c",user_name[i]);
}
}