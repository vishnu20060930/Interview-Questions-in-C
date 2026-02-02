#include <stdio.h>
#include<string.h>

void main()
{
int uid=720749;
int upwsd=98664;
int id;
int pwsd;
printf("enter the user id\n");
scanf("%d",&id);
printf("enter the password\n");
scanf("%d",&pwsd);
if(uid==id)
{
    if(upwsd==pwsd)
    {
        printf("login successful");
        
    }
    else
    {
        printf("incorrect password\n");
        
    }
}
else
{
    printf("incorrect user id\n");
}
}
